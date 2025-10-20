//
// Created by Stefan Andonov on 13.10.25.
//

#include<iostream>

using namespace std;

int main (){
    int price;
    cin >> price;

    //18% DDB
    //1.
    float ddv = price * 18.0 / 100;
    cout << price + ddv << endl;

    //2.
    cout << price * 1.18 << endl;
    return 0;
}