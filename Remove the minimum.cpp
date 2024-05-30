#include <iostream>
// https://www.codewars.com/kata/563cf89eb4747c5fb100001b/train/cpp
#include <vector>


std::vector<unsigned int> removeSmallest(const std::vector<unsigned int>& numbers) {
    size_t smallestIndex = 0;
    unsigned int smallestNum = numbers[0];
    std::vector<unsigned int> result = numbers;
    for(size_t i = 0; i < result.size(); i++){
        if (smallestNum > result[i]){
            smallestNum = result[i];
            smallestIndex = i;
        }
    }
    if (!result.empty()) {
        result.erase(result.begin() + smallestIndex);
    }
    return result;
}

int main() {
    std::vector<unsigned int> numbers = {5, 2, 2, 1, 2, 1};
    std::vector<unsigned int> result = removeSmallest(numbers);
    
    // Print the result
    std::cout << "Original vector: ";
    for (auto num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    std::cout << "Vector after removing smallest element: ";
    for (auto num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    return 0;
}