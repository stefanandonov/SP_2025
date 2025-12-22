//
// Created by Stefan Andonov on 15.12.25.
//


#include<iostream>
using namespace std;

int main () {
    //1. pointers
    int x = 5;
    int * ptr;
    ptr = &x;
    cout << x << endl;
    cout << ptr << endl;

//    ptr++;
//    cout << *ptr;
    (*ptr)++;
    cout << x << endl;

    //2. array
    int array [100];

    for (int i=0;i<100;i++){
        array[i]=i;
    }

    //array is a pointer to the 0-th element

    cout << *(array+5) << endl;

    //3. references
    int & rfr = x;
    rfr++;
    cout << x;
    return 0;
}