//
// Created by Stefan Andonov on 11.12.25.
//

#include<iostream>
using namespace std;


int gcd (int m, int n){
    if (m%n==0){
        return n;
    } else {
        return gcd(n, m%n);
    }
}

int main () {
    cout << gcd(50,24);
}
