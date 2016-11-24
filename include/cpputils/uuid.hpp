#pragma once

#include <string>
#include <boost/uuid/uuid.hpp>
#include <boost/uuid/random_generator.hpp>
#include <boost/uuid/uuid_io.hpp>

namespace utils {

class uuid
{
public:
    static std::string uuid_to_bytes(boost::uuids::uuid u)
    {
        std::string str(16, 0);
        std::copy(u.begin(), u.end(), str.begin());
        return str;
    }

    static boost::uuids::uuid bytes_to_uuid(std::string bytes)
    {
        if (bytes.size() != 16) throw std::exception();

        boost::uuids::uuid u;
        memcpy(&u, bytes.c_str(), 16);

        return u;
    }
};

}
