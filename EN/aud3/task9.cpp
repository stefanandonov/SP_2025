//
// Created by Stefan Andonov on 31.10.25.
//


#include<iostream>
using namespace std;

int main () {
    int number;
    cin >> number;

    int temp = number;

    bool allGood = true;
    while (temp>9){
        int ld = temp%10;
        int sld = temp/10%10;

        if (ld>=sld){
            allGood=false;
            break;
        }


        temp/=10;
    }

    cout << allGood;
    return 0;
}