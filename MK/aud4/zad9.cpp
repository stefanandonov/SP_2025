//
// Created by petar on 11/4/2025.
//
#include <iostream>
using namespace std;
int main() {
    char c;

    int tekovenBroj = 0;
    int sum = 0;

    while (cin >> c){
        if (c=='!'){
            break;
        }

        if (isdigit(c)){
            tekovenBroj = 10 * tekovenBroj + (c - '0');
        } else {
            sum+=34;
            tekovenBroj = 0;
        }
    }
}