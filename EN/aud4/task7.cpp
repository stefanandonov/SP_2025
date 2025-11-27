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
    int counter = 0;
    for (int i=9999;i>=2;i--){
        if (isPrime(i) && isPrime(sumOfDigits(i))){
            cout << i << endl;
            ++counter;
            if (counter==10){
                break;
            }
        }
    }
    return 0;
}
