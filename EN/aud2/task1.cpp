//
// Created by Stefan Andonov on 16.10.25.
//


#include<iostream>

using namespace std;

int main() {
    char c;
    cin >> c;

    if (c >= 'a' && c <= 'z') { //0or1 <= 'z'
        cout << "lower case" << endl;
    } else if (c >= 'A' && c <= 'Z') {
        cout << "upper case" << endl;
    } else if (c >= '0' && c <= '9') {
        cout << "digit" << endl;
    } else {
        cout << "not a letter or digit" << endl;
    }
    return 0;
}