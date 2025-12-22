//
// Created by Stefan Andonov on 11.12.25.
//


#include<iostream>
using namespace std;

int sumOfDigits(int number) {
    if (number == 0) {
        return 0;
    } else {
        return number%10 + sumOfDigits(number / 10);
    }
}

int main () {
    int n;
    cin >> n;
    cout << sumOfDigits(n);
    return 0;
}