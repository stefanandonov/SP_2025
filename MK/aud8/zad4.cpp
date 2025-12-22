//
// Created by Stefan Andonov on 11.12.25.
//


#include<iostream>
using namespace std;

bool isPrime (int n, int d){
    if (d==1){  //all possible divisors were checked and none is a divisor
        return true;
    }
    if (n%d==0){ //we have found successfully a divisor -> number is not a prime number
        return false;
    }
    return isPrime(n, d-1);
}

int nextPrime (int n){
    if (isPrime(n,n/2+1)){
        return n;
    }
    else {
        return nextPrime(n+1);
    }
}

int main () {
    int n;
    cin >> n;

    int next = nextPrime(n+1);
    cout << next << " - " << n << " = " << next - n;
    return 0;
}