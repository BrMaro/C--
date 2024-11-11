#include <vector>

std::vector<int> move_zeroes(const std::vector<int>& input) {
    int count = 0;
    std::vector<int> resultVec;
    for (int i : input){
        if(i!=0){
            resultVec.push_back(i);
        } else{
            count++;
        }
    }
    resultVec.insert(resultVec.end(),count,0);
    return resultVec;
}