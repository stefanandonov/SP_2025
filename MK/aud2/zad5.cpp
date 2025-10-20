//
// Created by Stefan Andonov on 20.10.25.
//


#include<iostream>

using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

//    if (x > 0 && y > 0) {
//        cout << 1;
//    }
//    else if (x < 0 && y > 0) {
//        cout << 2;
//    }
//    else if (x < 0 && y < 0) {
//        cout << 3;
//    }
//    else if (x > 0 && y < 0) {
//        cout << 4;
//    }
//    else if (x==0 && y==0) {
//        cout << "center";
//    }
//    else if (x == 0) {
//        cout << "y axis";
//    }
//    else if (y == 0) {
//        cout << "x axis";
//    }


    if (y>0){
        if (x>0){
            cout << 1;
        } else if (x<0){
            cout << 2;
        }
    } else if (y<0) {
        if (x>0) {
            cout << 4;
        } else if (x<0){
            cout << 3;
        }
    }
    else if (x==0 && y==0) {
        cout << "center";
    }
    else if (x == 0) {
        cout << "y axis";
    }
    else if (y == 0) {
        cout << "x axis";
    }

    return 0;
}