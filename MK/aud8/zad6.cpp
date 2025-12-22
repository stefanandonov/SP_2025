//
// Created by Stefan Andonov on 11.12.25.
//


#include<iostream>

using namespace std;


int count8(int number) {
    if (number == 0) {
        return 0;
    } else {
        int ld = number % 10;
        int sld = number / 10 % 10;
        if (ld == 8) {
            if (sld == 8) {
                return 2 + count8(number / 10);
            }
            return 1 + count8(number / 10);

        }
        return count8(number / 10);

    }
}

int main() {
    int n = 181881;
    cout << count8(n);
    return 0;
}