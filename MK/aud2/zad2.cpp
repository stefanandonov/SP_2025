//
// Created by Stefan Andonov on 13.10.25.
//


#include<iostream>
using namespace std;

int main (){
    char c;
    cin >> c;

    if (c>='a' && c<='z'){
        cout << "lower" << endl;
    } else if (c>='A' && c<='Z') {
        cout << "upper" << endl;
    } else if (c>='0' && c<='9'){
        cout << "digit" << endl;
    }

    return 0;
}