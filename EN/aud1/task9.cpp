//
// Created by Stefan Andonov on 16.10.25.
//

#include<iostream>

using namespace std;

int main (){
    int number;
    cin >> number;
    cout << number / 100 << endl;
    cout << number / 10 % 10 << endl;
    cout << number % 10;
    return 0;
}
