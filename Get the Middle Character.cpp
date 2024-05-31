#include <string>
#include <iostream>

std::string get_middle(std::string input) 
{
    size_t length = input.length();
    size_t middle = length / 2;
    std::string midChars;

    if (length % 2 == 0){
        midChars = input.substr(middle-1,2);
    } else {
        midChars = input.substr(middle,1);
    }
    return midChars;
}


int main() {
    // Test cases
    std::string test1 = "abc";
    std::string test2 = "abcd";
    std::string test3 = "abcdef";
    
    // Output the middle characters for each test case
    std::cout << "Middle characters of '" << test1 << "': " << get_middle(test1) << std::endl;
    std::cout << "Middle characters of '" << test2 << "': " << get_middle(test2) << std::endl;
    std::cout << "Middle characters of '" << test3 << "': " << get_middle(test3) << std::endl;

    return 0;
}