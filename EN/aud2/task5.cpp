//
// Created by Stefan Andonov on 30.10.25.
//


#include<iostream>
using namespace std;

int main () {
    int year;
    cin >> year;

    if ((year%4==0 && year%100!=0) || year%400==0){
        cout << "lear year";
    } else {
        cout << "regular year";
    }
    return 0;
}
