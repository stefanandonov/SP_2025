//
// Created by Stefan Andonov on 6.11.25.
//

#include<iostream>
using namespace std;

int countOfDigit(int number){
    int c = 0;
    while (number>0){
        ++c;
        number/=10;
    }
    return c;
}

int sumOfDigits (int number){
    int sum = 0;
    while (number>0){
        sum += number%10;
        number/=10;
    }
    return sum;
}

int firstDigit (int number){
    while (number>9){
        number/=10;
    }
    return number;
}

int countDigits (int number, int k) {
    int c = 0;
    while (number>0){
        int ld = number%10;
        if (ld == k){
            ++c;
        }
        number/=10;
    }
    return c;
}

void printCountOfDigits (int number){
    cout << "The number " << number << " has " << countOfDigit(number) << " digits." << endl;
}

int main () {
    int n;
    cin >> n;
    printCountOfDigits(n);
    cout << n;
    return 0;
}
