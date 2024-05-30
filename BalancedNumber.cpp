#include <string>
#include <iostream>


std::string balancedNum (unsigned long long int number )
{
    std::string numberString = std::to_string(number);
    std::cout<< "\n\nTest Number: " << number << std::endl;

    int numDigits = numberString.length();


    if (numDigits <=2 ){ 
        return "Balanced";
    } 
    else{
        //  Odd
        int leftSum = 0,rightSum = 0;
        int midIndex = numDigits / 2;

        std::cout << "Mid Index: "<< midIndex<<std::endl;

        if (numDigits % 2 != 0){
            std::cout<<"leftSum\n";
            for(size_t i = 0; i< midIndex;i++){
                int intNumString = numberString[i] - '0';
                std::cout<<"Index: "<<i<< " Number in index position: "<< intNumString <<std::endl;
                leftSum += intNumString;
                std::cout<<"Current left sum: "<<leftSum<<std::endl;
            }
            std::cout<<"rightSum\n";

            for(size_t i = midIndex+1; i< numberString.length() ; i++){
                int intNumString = numberString[i] - '0';
                std::cout<<"Index: "<<i<< " Number in index position: "<< intNumString <<std::endl;
                rightSum += intNumString;
                std::cout<<"Current right sum: "<<rightSum<<std::endl;

            }

            std::cout<<leftSum<<" "<<rightSum<<std::endl;
        // Even
        } else{
            for(size_t i = 0; i< midIndex-1; i++){
                int intNumString = numberString[i] - '0';
                std::cout<<"Index: "<<i<< " Number in index position: "<< intNumString <<std::endl;
                leftSum += intNumString;
                std::cout<<"Current left sum: "<<leftSum<<std::endl;            
            }

            for(size_t i = midIndex+1; i< numberString.length() ;i++){
                int intNumString = numberString[i] - '0';
                std::cout<<"Index: "<<i<< " Number in index position: "<< intNumString <<std::endl;
                rightSum += intNumString;
                std::cout<<"Current right sum: "<<rightSum<<std::endl;            
                
                
                }
            std::cout<<leftSum<<" "<<rightSum<<std::endl;
        }
             if (leftSum == rightSum) {
                std::cout<<"Balanced";
                return "Balanced";
            } else {
                std::cout<<"Not Balanced";
                return "Not Balanced";
            }
    }
}

int main() {
    int number = 295591; 
    std::cout << balancedNum(number) << std::endl;
    return 0;
}