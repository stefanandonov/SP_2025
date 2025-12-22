//
// Created by Stefan Andonov on 18.12.25.
//


#include<iostream>
using namespace std;

int main () {

    //Pointers
    int x = 5;
    cout << "Value: " << x << endl;
    cout << "Address: " << &x << endl;

    int * xPtr;
    xPtr = &x;
    cout << "xPtr address: " << xPtr << endl;

    (*xPtr)++;



    cout <<"After increment of the content of xPtr: " << x << endl;

    xPtr++;
    cout << "After increasing the address: " << xPtr << " -> " <<  *xPtr << endl;


    //Arrays are pointers
    int array [100];
    for (int i = 0; i < 100; ++i) {
        array[i] = i;
    }

    cout << "Array address: " << array << endl;
    cout << "Array[0] content: " << *array << endl;
    cout << "Array[5] content: " << *(array+5) << endl;
    cout << "Example: " << *array + 5 << endl;

    //References

    int & xRef = x;
    xRef++;
    cout << "After incrementing the reference to x: " << x << endl;


    return 0;
}