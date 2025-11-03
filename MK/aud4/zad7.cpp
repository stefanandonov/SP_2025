//
// Created by Stefan Andonov on 3.11.25.
//

#include<iostream>
using namespace std;

bool isPrime(int number) {
    for (int i = 2; i <= ceil(sqrt(number)); i++) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

int main () {

    for (int i=1;i<998;i++){
        if (isPrime(i) && isPrime(i+2)){
            cout << i << ", " << i+2 << endl;
        }
    }
    return 0;
}