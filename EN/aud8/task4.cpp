//
// Created by Stefan Andonov on 11.12.25.
//

#include<iostream>
using namespace std;


bool isPrime(int number, int divisor){
    if (divisor==1){
        return true;
    }
    if (number%divisor==0) {
        return false;
    }

    return isPrime(number, divisor-1);
}

int nextPrime (int n){
    if (isPrime(n, n/2+1)){
        return n;
    }
    return nextPrime(n+1);
}

int main () {
    int n = 573;
    int next = nextPrime(n+1);
    cout << next << " - " << n << " = "<< (next-n);
}
