#include <vector>
#include <string>
#include <iostream>

int persistence(long long number){
    int count = 0;
    std::vector<int> numberVec;

    if(std::to_string(number).length()==1){
        return count;
    } else{
        while (true){

            while (number > 0) { 
                int digit = number % 10;
                number /= 10;
                numberVec.push_back(digit);
            }

            int product = 1;
            for(int el : numberVec){
                product *= el;
            }

            count++;
            number = product;
            numberVec.clear(); 

            
            if(product < 10){ 
                break;
            }
            
        }
        
    }
 
    return count;
}


int main() {
    long long number = 39;
    int persist = persistence(number);
    std::cout << "Persistence of " << number << " is " << persist << std::endl;
    return 0;
}