#include "file.hpp"

#include <cassert>

#include <sys/mman.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>

#include "guard.hpp"

std::vector<std::string> source_file_names;

void file_contents_t::reset(unsigned file_i)
{
    assert(file_i < source_file_names.size());
    std::string const& name = source_file_names[file_i];

    int fd = open(name.c_str(), O_RDONLY);
    auto scope_guard = make_scope_guard([&]{ close(fd); });

    struct stat sb;
    if(fstat(fd, &sb) == -1)
        throw std::runtime_error("Unable to stat file: " + name);

    m_source.reset(new char[sb.st_size + 2]);
    if(read(fd, reinterpret_cast<void*>(m_source.get()), sb.st_size) == -1)
        throw std::runtime_error("Unable to read file: " + name);

    m_source[sb.st_size] = m_source[sb.st_size + 1] = '\0';
    m_size = sb.st_size + 2;
    m_file_i = file_i;
}
