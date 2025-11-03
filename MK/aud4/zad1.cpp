//
// Created by Stefan Andonov on 3.11.25.
//

#include<iostream>
using namespace std;

int reverseNumber (int number) {
    int reverse = 0;

    while (number>0){
        int ld = number%10;
        reverse = 10*reverse + ld;
        number/=10;
    }

    return reverse;

}

int main () {
    int a,b;
    cin >> a >> b;

    for (int i=a;i<=b;i++){
        if (i == reverseNumber(i)){
            cout << i << endl;
        }
    }
}