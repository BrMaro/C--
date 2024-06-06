#include <string>
#include <vector>

std::vector<std::string> uniq(const std::vector<std::string> &v) {
    std::vector<std::string> resultVector;
    for(std::string str : v){
        if (resultVector.empty()){
            resultVector.push_back(str);
        }
        else if (str != resultVector.back()){
            resultVector.push_back(str);
        }
    }
    return resultVector;
}