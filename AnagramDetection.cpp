#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>




bool isAnagram(std::string test, std::string original){
    std::vector<char> originalCharList,testCharList;
    // std::vector<char> testCharList(test.begin(),test.end());
    // std::vector<char> originalCharList(original.begin(),original.end());

    for (char ch: test){ 
        ch = tolower(ch);
        testCharList.push_back(ch);
    }
    
    // Populate originalCharList
    for (char ch: original){
        ch = tolower(ch);
        originalCharList.push_back(ch);
    }
    
    std::sort(testCharList.begin(),testCharList.end());
    std::sort(originalCharList.begin(), originalCharList.end());

    return testCharList == originalCharList;
}

int main() {
    std::string test1 = "listen";
    std::string original1 = "silent";
    
    std::string test2 = "hello";
    std::string original2 = "world";
    
    std::cout << "Test 1: " << (isAnagram(test1, original1) ? "Anagram" : "Not an Anagram") << std::endl;
    std::cout << "Test 2: " << (isAnagram(test2, original2) ? "Anagram" : "Not an Anagram") << std::endl;
    
    return 0;
}