// www.codewars.com/kata/5417423f9e2e6c2f040002ae/train/cpp

#include <vector>
#include <string>
#include <list>

std::vector<int> digitize(int n) {
    std::string numString = std::to_string(n);
    std::vector<char> numStringList(numString.begin(),numString.end());
    std::vector<int> numList;
    for (char numChar : numStringList){
        numList.push_back(numChar - '0');
    }
    return numList;
}