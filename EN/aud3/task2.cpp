//
// Created by Stefan Andonov on 30.10.25.
//

#include<iostream>
using namespace std;

int main () {
    int x, n;
    cin >> x >> n;

    int y = 1;

    while (n>0){
        y *= x;
        --n;
    }

    cout << y;

    return 0;
}
