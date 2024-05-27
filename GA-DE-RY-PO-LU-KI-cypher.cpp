#include <string>
#include <map>
#include <iostream>


int main() {
    std::string plainText = "gaderypoluki";
    std::string cipherText;

    std::map<std::string,std::string> cipherMap;
    cipherMap["G"] = "A";
    cipherMap["D"] = "E";
    cipherMap["R"] = "Y";
    cipherMap["P"] = "O";
    cipherMap["L"] = "U";
    cipherMap["K"] = "I";
    cipherMap["A"] = "G";
    cipherMap["E"] = "D";
    cipherMap["Y"] = "R";
    cipherMap["O"] = "P";
    cipherMap["U"] = "L";
    cipherMap["I"] = "K";
    cipherMap["g"] = "a";
    cipherMap["d"] = "e";
    cipherMap["r"] = "y";
    cipherMap["p"] = "o";
    cipherMap["l"] = "u";
    cipherMap["k"] = "i";
    cipherMap["a"] = "g";
    cipherMap["e"] = "d";
    cipherMap["y"] = "r";
    cipherMap["o"] = "p";
    cipherMap["u"] = "l";
    cipherMap["i"] = "k";

    for(size_t i = 0; i < plainText.length(); ++i){
        std::cout<<plainText[i];
        std::string keyToCheck = std::string(1,plainText[i]);
        auto it = cipherMap.find(keyToCheck);

        if (it != cipherMap.end()) {
            std::cout << "Value found " <<it->second<< std::endl;
            std::string cipherChar = it->second;
            cipherText += cipherChar;
        } else {
            cipherText += keyToCheck;
            std::cout << "Value not found" << std::endl;
        }
    }
    std::cout<<plainText<<std::endl;
    std::cout<<cipherText;
    return 0;
}
