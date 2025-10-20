//
// Created by Stefan Andonov on 16.10.25.
//


#include<iostream>
using namespace std;

int main () {
    int x,y;
    cin >> x >> y;

    if (x>0 && y>0) {
        cout << "I";
    }
    if (x<0 && y>0) {
        cout << "II";
    }
    if (x<0 && y<0) {
        cout << "III";
    }
    if (x>0 && y<0) {
        cout << "IV";
    }
    if (x==0 && y==0){
        cout << "center";
    } else if (x==0){
        cout << "y-axis";
    } else if (y==0){
        cout << "x-axis";
    }
    return 0;
}