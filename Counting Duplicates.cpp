#include <string>
#include <iostream>
#include <map>
#include <algorithm>

std::size_t duplicateCount(const std::string& in)
{
    int repeatedCharCount = 0;
    std::map<char, int> charCount;

    for (char c : in) {
        c = tolower(c);
        charCount[c]++;
    }

    for (const auto& pair : charCount) {
        if (pair.second >= 2) { 
            repeatedCharCount += 1; 
        }
    }

    return repeatedCharCount;
}
