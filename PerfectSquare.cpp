#include <iostream>
#include <cmath>

bool is_square(int n)
{
    double squareRoot = sqrt(n);
    return (squareRoot==std::trunc(squareRoot));
}

int main() {
    int number = 25;
    if (is_square(number)) {
        std::cout << number << " is a perfect square." << std::endl;
    } else {
        std::cout << number << " is not a perfect square." << std::endl;
    }
    return 0;
}