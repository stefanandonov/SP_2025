//
// Created by Stefan Andonov on 16.10.25.
//

#include<iostream>

using namespace std;

int main (){
    int date;
    cin >> date;
    int year = date % 10000;
    int day = date / 1000000;
    int month = date / 10000 % 100;
    cout << day << "." << month << "." << year;
    return 0;
}
