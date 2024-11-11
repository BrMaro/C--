#include <vector>
#include <iostream>


int FindOutlier(std::vector<int> arr){
    int result=-1;
    int sum = 0;
    std::vector<int> evens;
    std::vector<int> odds;

    for (int i: arr ){
        if(i % 2 == 0){
            evens.push_back(i);
        } else {
            odds.push_back(i);
        }
        if (evens.size()>=2 && odds.size()==1){
            result = odds[0];
            break;
        }
        if (odds.size()>=2 && evens.size()==1){
            result = evens[0];
            break;
        }
    }
    return result;
}