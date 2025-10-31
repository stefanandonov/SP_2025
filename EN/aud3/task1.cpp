//
// Created by Stefan Andonov on 30.10.25.
//

#include<iostream>

using namespace std;

int main() {

    int sum = 0;
    for (int i = 100; i < 1000; i++) {
        if (i%3==0 && i%7==0){
            cout << i << endl;
            sum += i;
        }

    }
    cout << sum;

    return 0;
}
