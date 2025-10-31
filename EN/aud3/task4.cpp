//
// Created by Stefan Andonov on 30.10.25.
//


#include<iostream>

using namespace std;

int main() {

//    1. Read N numbers and do something with them
//    int n;
//    cin >> n;
//
//    for (int i=0;i<n;i++){
//        int number;
//        cin >> number;
//        cout << number << ", ";
//    }


// 2. Read numbers (integers/doubles) until there is something to read
    int number;
    int max;
    int counter = 0;
    while (cin >> number) {
        if (number > 100) {
            continue; //ignore all numbers greater than 100
        }

        if (counter == 0) {
            max = number;
        }

        if (number > max) {
            max = number;
        }
        ++counter;

    }

    cout << max;

}