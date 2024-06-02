// https://www.codewars.com/kata/5b93f268563417c7ed0001bd/train/cpp

#include <iostream>
#include <vector>

bool isEviternity(int number) {
    std::vector<int> numList;
    int eightCount = 0, fiveCount = 0, threeCount = 0; 

    if(number==0){
        return false;
    }

    while (number > 0) {
        int digit = number % 10;
        number /= 10;
        numList.push_back(digit);
    }
    for (int i : numList) {
        if (i != 8 && i != 5 && i != 3) {
            return false;
        }
        if (i == 8) { eightCount++; }
        else if (i == 5) { fiveCount++; }
        else if (i == 3) { threeCount++; }
    }
    
    // Print counts for testing
    // std::cout << "Counts for " << number << ": " << eightCount << ", " << fiveCount << ", " << threeCount << std::endl;

    return (eightCount >= fiveCount) && (fiveCount >= threeCount);
}

int solve(int a, int b) {
    int count = 0;
    for (int i = a; i <= b; i++) {
        if (isEviternity(i)) {
            count++;
            std::cout << i << " is Eviternity." << std::endl; // Print numbers that meet the condition
        }
    }
    return count;
}

int main() {
    int a = 0;
    int b = 1000;

    std::cout << "Number of Eviternity numbers between " << a << " and " << b << ": " << solve(a, b) << std::endl;

    return 0;
}
