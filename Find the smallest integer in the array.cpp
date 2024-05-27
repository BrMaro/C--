#include <iostream>
#include <vector>

int findSmallest(std::vector<int> list) {
    int smallestNum = list[0];
    int listSize = list.size();
    for (int i = 0; i < listSize; i++) {
        std::cout << list[i] << " " << smallestNum << std::endl;
        if (list[i] < smallestNum) {
            smallestNum = list[i];
        }
    }
    return smallestNum;
}

int main() {
    // Example usage
    std::vector<int> myList = {5, 2, 8, 1, 3};
    int result = findSmallest(myList);
    std::cout << "Smallest number: " << result << std::endl;
    return 0;
}
