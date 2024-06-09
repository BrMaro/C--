// https://www.codewars.com/kata/546f922b54af40e1e90001da/solutions/cpp
#include <string>
#include <cctype>

std::string alphabet_position(const std::string &text) {
    std::string resultString;
    for(char ch: text){
        if(std::isalpha(ch)){
            int pos = std::toupper(ch) - 'A' + 1;
            resultString += std::to_string(pos) + " ";
        }
    }
    if (!resultString.empty()){
        resultString.pop_back();
    }
    return resultString;
}