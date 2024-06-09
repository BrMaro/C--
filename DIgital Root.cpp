#include <string>

int digit_sum(int num){
    std::string numString = std::to_string(num);
    int count;
    for (size_t i = 0; i < numString.length(); i++){
        int stringToInt = numString[i] -'0';
        count += stringToInt;
    }
    return count;
}

int digital_root(int n){
  while( n>= 10){
    n = digit_sum(n);
  }
  return n;
}