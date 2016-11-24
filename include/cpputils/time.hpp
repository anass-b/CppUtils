#pragma once

#include <string>
#include <ctime>
#include <iomanip>

namespace utils {

class time
{
public:
    static std::string time_to_str(time_t date, std::string format)
    {
        char str[20];
        strftime(str, 20, format.c_str(), localtime(&date));
        return std::string(str);
    }

    static time_t str_to_time(std::string str, std::string format)
    {
        struct std::tm tm;
        std::istringstream stream(str);
        stream >> std::get_time(&tm, format.c_str());
        return mktime(&tm);
    }
};

}
