//
// Created by Stefan Andonov on 29.12.25.
//


#include<iostream>
using namespace std;

void printEvenDigits (int number) {
    if (number==0){
        return ;
    }
    int ld = number%10;
    if (ld%2==0){
        cout << ld << " ";
    }
    printEvenDigits(number/10);
}

void printOddDigits (int number){
    if (number==0){
        return;
    }
    int ld = number%10;
    printOddDigits(number/10);
    if (ld%2==1){
        cout << ld << " ";
    }
}


void printFunction (int number){
    if (number==0){
        return ;
    }
    int ld = number%10;

    if (ld%2==0){
        cout << ld << " ";
    }
    printFunction(number/10);
    if (ld%2==1){
        cout << ld << " ";
    }
}

int sum (int number){
    if (number==0){
        return 0;
    } else {
        int ld = number%10;
        if (ld%2==0) {
            return ld + sum(number / 10);
        } else {
            return sum(number / 10);
        }
    }
}


int process (int number){
    if (number==0){
        return 0;
    }

    int ld = number%10;
    int res;
    if (ld%2==0){ //last digit is even
        cout << ld << " ";
        return ld + process(number/10);
    } else { //last digit is odd
        res = process(number/10);
        cout << ld << " ";
    }

    return res;
}

int main () {

    int number;
    while (cin>>number){
        cout << "Digits: ";
//        printEvenDigits(number);
//        printOddDigits(number);
//        cout << endl;
//        cout << "Sum: " << sum(number) << endl;

        int sum = process(number);
        cout << endl;
        cout << "Sum: " << sum << endl;
    }
    return 0;
}