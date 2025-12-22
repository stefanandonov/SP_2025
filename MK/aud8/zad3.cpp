//
// Created by Stefan Andonov on 11.12.25.
//


#include<iostream>
using namespace std;

void countDown (int n){
    if (n==0){
        return ;
    }
    else {
        cout << n << endl;
        countDown(n-1);
    }
}

void countUpComplicated (int c, int n){
    if (c>n){
        return ;
    } else {
        cout << c << endl;
        countUpComplicated(c+1, n);
    }
}

void countUpSimpler(int n){
    if (n==0){
        return ;
    }
    else {
        countUpSimpler(n-1);
        cout << n << endl;
    }
}

int main () {
    countUpSimpler(5);
    return 0;
}