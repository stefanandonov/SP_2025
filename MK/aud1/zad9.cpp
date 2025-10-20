//
// Created by Stefan Andonov on 13.10.25.
//

#include<iostream>

using namespace std;

int main() {
    int number;
    cin >> number;
    cout << number / 100 << endl; //first digit of three-digit number
    cout << number / 10 % 10 << endl; // middle digit
    cout << number % 10 << endl;
    return 0;
}