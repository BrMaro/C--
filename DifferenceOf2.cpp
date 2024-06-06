#include <iostream>
#include <vector>
#include <algorithm>

std::vector<std::pair<int, int>> twos_difference(const std::vector<int> &vec) {
    std::vector<std::pair<int, int>> resultVector;
    std::vector<int> mutableVec = vec;
    std::sort(mutableVec.begin(),mutableVec.end());

    for (std::vector<int>::size_type i = 0; i < mutableVec.size(); ++i) {
        for (auto j = i + 1; j < mutableVec.size(); ++j) {
            if (mutableVec[j] - mutableVec[i] == 2) {
                resultVector.push_back(std::make_pair(mutableVec[i], mutableVec[j]));
            }
        }
    }

    return resultVector;
}
