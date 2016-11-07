#pragma once

#include <string>
#include <ctime>
#include <iomanip>

namespace utils {

class time
{
public:
    static std::string time_to_str(time_t date)
    {
        char str[20];
        strftime(str, 20, "%Y-%m-%d %H:%M:%S", localtime(&date));
        return std::string(str);
    }

    static time_t str_to_time(std::string str)
    {
        struct std::tm tm;
        std::istringstream stream(str);
        stream >> std::get_time(&tm, "%m/%d/%Y %H:%M:%S");
        return mktime(&tm);
    }
};

}
