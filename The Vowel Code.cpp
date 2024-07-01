#include <string>
#include <cctype>
#include <map>

std::string encode(const std::string &str) {
    std::string cipherText;
    std::map<char, char> cipherMap;
    cipherMap['a'] = '1';
    cipherMap['e'] = '2';
    cipherMap['i'] = '3';
    cipherMap['o'] = '4';
    cipherMap['u'] = '5';

    for (char ch : str) {
        auto it = cipherMap.find(ch);
        if (it != cipherMap.end()) {
            cipherText += it->second;
        } else {
            cipherText += ch;
        }
    }
    return cipherText;
}

std::string decode(const std::string &str) {
    std::string plainText;
    std::map<char, char> cipherMap;
    cipherMap['1'] = 'a';
    cipherMap['2'] = 'e';
    cipherMap['3'] = 'i';
    cipherMap['4'] = 'o';
    cipherMap['5'] = 'u';

    for (char ch : str) {
        auto it = cipherMap.find(ch);
        if (it != cipherMap.end()) {
            plainText += it->second;
        } else {
            plainText += ch;
        }
    }
    return plainText;
}
