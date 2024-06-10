#include <string>
#include <cctype>

std::string to_camel_case(std::string text){
    for (size_t i = 0; i < text.length(); ++i){
        if (!std::isalpha(text[i])){
            text.erase(i, 1);
            if (i < text.length()) text[i] = std::toupper(text[i]);
        }
    }
    return text;
}
