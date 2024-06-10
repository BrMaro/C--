#include<vector>

bool isValidWalk(std::vector<char> walk) {
    int charSum = 0;
    if (walk.size() != 10) return false;

    for (char ch : walk){
        if (ch == 'n') charSum += 1;
        else if (ch == 's') charSum -= 1;
        else if (ch == 'e') charSum += 100;
        else charSum -= 100;
    }
    if (charSum == 0) return true;
    else return false;
}