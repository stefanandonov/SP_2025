//
// Created by Stefan Andonov on 6.11.25.
//


#include<iostream>
using namespace std;

long transform (long number) {
    int ld = number % 10;
    int sld = number / 10 % 10;
    if (ld == 0) {
        ld = 1;
    }
    if (sld == 0) {
        sld = 1;
    }

    int product = ld * sld;

    if (product>=10){ //two-digits
        return number/100 * 100 + product;
    } else { //single-digit
        return number/100 * 10 + product;
    }
}

int main (){

    long n;
    while (cin >> n) {
        while (n>9){
            n = transform(n);
            cout << n << endl;
        }
    }


    return 0;
}