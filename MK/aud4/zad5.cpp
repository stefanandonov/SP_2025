//
// Created by Stefan Andonov on 3.11.25.
//

#include<iostream>
#include<cmath>

using namespace std;

bool isPrime(int number) {
    for (int i = 2; i <= ceil(sqrt(number)); i++) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

int nextPrime(int number) {
    for (int i = number + 1;; i++) {
        if (isPrime((i))){
            return i;
        }
    }
}

int main() {
    int x;
    cin >> x;

    int nextP = nextPrime(x);

    cout << nextP << " - " << x << " = " << (nextP-x);
    return 0;
}