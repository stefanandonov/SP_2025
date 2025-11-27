//
// Created by Stefan Andonov on 6.11.25.
//

#include<iostream>
#include<cmath>
using namespace std;

int countOfDigit(int number){
    int c = 0;
    while (number>0){
        ++c;
        number/=10;
    }
    return c;
}

int sumOfHalves (int number){
    int d = countOfDigit(number);
    d/=2;

    int right = number % (int) pow(10,d);
    int left = number / (int) pow(10,d);
    return left+right;
}

int main () {

    int x = 1234512345;

    cout << sumOfHalves(x);
    return 0;
}
