#include <string>
#include <algorithm>

std::string dec2Hex(int n){
    int remainder = 0;
    std::string remString;

    if (n==0) {
        remString += "0";
    }

    while (n!=0){
        remainder = n%16; 
        n=n / 16;

        if (remainder>9){
            remString += ('A' + (remainder-10));
        } else {
            remString += std::to_string(remainder);
        }
    }
    std::reverse(remString.begin(), remString.end());
    if(remString.length()==1){
        remString.insert(0,"0");
    }
    return remString;
}


std::string rgb_to_hex(int r, int g, int b)
{
    std::string hexStr;

    if(r>255){r=255;}
    if(g>255){g=255;}
    if(b>255){b=255;}

    if(r<0){r=0;}
    if(g<0){g=0;}
    if(b<0){b=0;}

    hexStr += (dec2Hex(r) + dec2Hex(g) + dec2Hex(b));

    return hexStr;
}