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

long formula (int n){
    if (n==1){
        return 1;
    } else {
        return factorial(sum(n)) + formula(n-1);
    }
}

int main () {

    //1! + (1+2)! + (1+2+3)! + … + (1+2+…+n)!
    int n;
    cin >> n;

    cout << formula(n);

    return 0;
}