//
// Created by Stefan Andonov on 11.12.25.
//


#include<iostream>

using namespace std;

long factorial(long n) {
    if (n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int sum(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n + sum(n - 1);
    }
}

int countOfDigitsI(int number) {
    int c = 0;
    while (number != 0) {
        ++c;
        number /= 10;
    }
    return c;
}

int countOfDigitsR(int number) {
    if (number == 0) {
        return 0;
    } else {
        return 1 + countOfDigitsR(number / 10);
    }
}

int countOfEvenDigitsR(int number) {
    if (number == 0) {
        return 0;
    } else {
        int ld = number % 10;
        if (ld % 2 == 0) {
            return 1 + countOfEvenDigitsR(number / 10);
        } else {
            return  countOfEvenDigitsR(number/10);
        }
    }
}

int main() {
    cout << factorial(5) << endl;
    cout << sum(5) << endl;
    cout << countOfDigitsR(12345);
    cout << countOfEvenDigitsR(12345);
    return 0;
}