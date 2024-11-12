#include <iostream>
#include <bitset>
#include <string>

unsigned int countBits(unsigned long long n){
    std::bitset<64> bits(n);
    std::string numString = bits.to_string();
    unsigned int count=0;
    for(char ch : numString){
        if(ch=='1'){count++;}
    }
    return count;
}