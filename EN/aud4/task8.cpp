//
// Created by Stefan Andonov on 6.11.25.
//

#include<iostream>
using namespace std;

bool isPrime(int number) {
    if (number==2){
        return true;
    }
    for (int i=2;i<=ceil(sqrt(number));i++){
        if (number % i == 0){
            return false;
        }
    }
    return true;
}

int sumOfDigits (int number){
    int sum = 0;
    while (number>0){
        sum += number%10;
        number/=10;
    }
    return sum;
}

int main () {
    for (int i=2;i<998;i++){
        if (isPrime(i) && isPrime(i+2)){
            cout << i << ", " << i+2 << endl;
        }
    }
    return 0;
}
