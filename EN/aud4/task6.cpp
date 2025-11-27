//
// Created by Stefan Andonov on 6.11.25.
//

#include<iostream>
#include<cmath>

using namespace std;

bool isPrime(int number) {
    for (int i=2;i<=ceil(sqrt(number));i++){
        if (number % i == 0){
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    for (int i = n + 1;; i++) {
        if (isPrime(i)) {
            cout << i << " - " << n << " = " << i - n << endl;
            break;
        }
    }
    return 0;
}
