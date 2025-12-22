//
// Created by Stefan Andonov on 11.12.25.
//

#include<iostream>

using namespace std;

long factorial(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int sum (int n){
    if (n == 1) {
        return 1;
    } else {
        return n + sum(n - 1);
    }
}

int digitsCountI(int number) {
    int c = 0;
    while (number > 0) {
        ++c;
        number /= 10;
    }
    return c;
}

int digitsCountR(int number) {
    if (number == 0) {
        return 0;
    }
    return 1 + digitsCountR(number / 10);
}

int evenDigitsCountR(int number) {
    if (number == 0) {
        return 0;
    } else {
        int ld = number % 10;
//        return !(ld%2) + evenDigitsCountR(number/10);
        if (ld % 2 == 0) {
            return 1 + evenDigitsCountR(number/10);
        } else {
            return 0 + evenDigitsCountR(number/10);
        }
    }
}

bool allEvenDigits (int number){
    if (number==0){
        return true;
    }
    int ld = number%10;
    if (ld%2==1){ //odd
        return false;
    }
    return allEvenDigits(number/10);
}

int main() {
    int n = 5;
    cout << factorial(n);
    cout << digitsCountR(12345);
    cout << allEvenDigits(21224);
}
