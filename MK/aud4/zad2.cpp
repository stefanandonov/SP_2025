//
// Created by Stefan Andonov on 3.11.25.
//

#include<iostream>
using namespace std;

bool isSorted(int num){
    while (num >= 10){
        int ld = num%10;
        int sld = num/10%10;
        if (ld >= sld) {
            return false;
        }
        num/=10;
    }

    return true;
}

int main () {

    int n;
    cin >> n;
    int min;
    bool first = true;

    for (int i=0;i<n;i++){
        int number;
        cin >> number;
        //Is number a goody number?
        if (isSorted(number)) {
            if (first){
                min = number;
                first = false;
            } else {
                if (number<min){
                    min = number;
                }
            }
            cout << number << endl;
        }
    }
    cout << min;
    return 0;
}