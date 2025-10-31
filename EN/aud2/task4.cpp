//
// Created by Stefan Andonov on 30.10.25.
//


#include<iostream>

using namespace std;

int main() {
    float a, b, c;
    float temp;
    cin >> a >> b >> c;

    if (((a + b) > c) && ((a + c) > b) && ((b + c) > a)) {
        cout << "This is triangle!" << endl;
        if (a>b){
            temp = a;
            a = b;
            b = temp;
        }
        if (b>c){
            temp = b;
            b = c;
            c = temp;
        }
        if (a>c){
            temp = a;
            a = c;
            c = temp;
        }

        if ((a*a + b*b) == c*c) {
            cout << "Also a right triangle!";
        }
    } else {
        cout << "This is not a triangle!";
    }

        return 0;
}

