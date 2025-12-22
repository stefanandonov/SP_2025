//
// Created by Stefan Andonov on 18.12.25.
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

void swapRef (int & a, int & b){
    int tmp = a;
    a = b;
    b = tmp;
}

int main () {

    int x = 5, y = 6;

//    swap(x,y); NOT WORKING
//    swapPtr(&x, &y); WORKS
    swapRef(x,y);

    cout << x << " " << y;
    return 0;
}