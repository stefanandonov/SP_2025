//
// Created by Stefan Andonov on 11.12.25.
//

#include<iostream>
using namespace std;

int sumDigits(int number) {
    if (number == 0) {
        return 0;
    }
    return number%10 + sumDigits(number / 10);
}

int main () {
    cout << sumDigits(12345);
}
