#include <vector>
#include <bits/stdc++.h>


std::vector<int> evenNumbers(std::vector<int> arr, int n){
    std::vector<int> evenNumberList;
    int count;
    for (int i = arr.size(); i >=0; i--){
        if (count >= n){
            break;
        }
        if( arr[i] % 2 == 0){
            evenNumberList.push_back(arr[i]);
            count++;
        }
  
    }
    std::reverse(evenNumberList.begin(), evenNumberList.end());
    return evenNumberList;
}