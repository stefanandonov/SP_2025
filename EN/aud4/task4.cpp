//
// Created by Stefan Andonov on 6.11.25.
//

#include<iostream>

using namespace std;


int sumOfHalves(int number) {
    return number%100 + number/100;
}



int main() {
    int counter = 0;
    for (int i = 1000; i < 10000; i++) {
        if (i % sumOfHalves(i) == 0){
            cout << i << endl;
            ++counter;
        }
    }
    cout << counter;
    return 0;
}
