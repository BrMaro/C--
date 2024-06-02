// https://www.codewars.com/kata/5783d8f3202c0e486c001d23/train/cpp
#include <vector>
#include <string>

std::vector<float> to_float_array(const std::vector<std::string>& arr) {
    std::vector<float> floatList;
    for(std::string str : arr){
        floatList.push_back(std::stof(str));
    }
    return floatList;
}