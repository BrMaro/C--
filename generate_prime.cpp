#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int n){
    if (n<=1) return false;
    for (int i = 2; i * i <= n; ++i) {
            if (n % i == 0) return false;
    }
    return true;
}

int main(){

    int upperLimit, lowerLimit;
    cout << "Enter lower limit: ";
    cin >> lowerLimit;
    cout << "Enter upper limit: ";
    cin >> upperLimit;
    
    for (int i = lowerLimit; i<= upperLimit; i++){
        if (isPrime(i)){
            cout << i << endl;
        }
    }
    return 0;
}