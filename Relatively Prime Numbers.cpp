#include <vector>
// https://www.codewars.com/kata/56b0f5f84de0afafce00004e/train/cpp
#include <iostream>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
std::vector<int> relativelyPrime(int n, std::vector<int> list){
    std::vector<int> result;
    for(size_t i = 0; i < list.size(); i++){
        if (gcd(list[i],n)==1){
            result.push_back(list[i]);
        }
    }
    return result;
}

int main() {
    // Example usage
    std::vector<int> numbers = {2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 6;
    std::vector<int> relativelyPrimeNumbers = relativelyPrime(n, numbers);
    for (int num : relativelyPrimeNumbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}