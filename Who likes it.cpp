// https://www.codewars.com/kata/5266876b8f4bf2da9b000362/train/cpp

#include <string>
#include <vector>

std::string likes(const std::vector<std::string> &names){
    std::string resultString;
    if (names.size()==0){
        resultString = "no one likes this";
    } else if (names.size() == 1){
        resultString = names[0] + " likes this";
    } else if (names.size() == 2){
        resultString = names[0] + " and " + names[1] + " like this";
    } else if (names.size() == 3){
        resultString = names[0] + ", " + names[1] + " and " + names[2] + " like this";
    } else{
        resultString = names[0] + ", " + names[1] + " and " + std::to_string(names.size() - 2) + " others like this";
    }
    return resultString;
}