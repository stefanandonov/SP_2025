//
// Created by Stefan Andonov on 15.12.25.
//


#include<iostream>
using namespace std;

void swap (int a, int b){
    int tmp = a;
    a = b;
    b = tmp;
}

void swapPtr (int * a, int * b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void swapRfr (int & a, int & b){
    int tmp = a;
    a = b;
    b = tmp;
}

int main () {
    int x=5,y=6;

//    swap(x,y); WRONG
//    swapPtr(&x, &y); CORRECT
    swapRfr(x,y);
    cout << x << " " << y;
    return 0;
}