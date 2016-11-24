#pragma once

#include <string>

namespace utils {

class strings
{
public:
    static void replace_all_occurrences(std::string& original, const std::string& find, const std::string& replace) {
        size_t index = 0;
        while ((index = original.find(find, index)) != std::string::npos) {
             original.replace(index, find.length(), replace);
             index += replace.length();
        }
    }
};

}
