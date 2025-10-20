//
// Created by Stefan Andonov on 13.10.25.
//

#include<iostream>

using namespace std;

int main (){
    int date;
    cin >> date;

    int d = date / 1000000;
    int m = date / 10000 % 100; //13102025 / 10000 = 1310 % 100 = 10 (month)
    int y = date % 10000;

    cout << d << "." << m << "." << y << endl;
    return 0;
}