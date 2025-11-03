//
// Created by Stefan Andonov on 3.11.25.
//

#include<iostream>
using namespace std;

int leftHalf (int number){
    return number/100;
}

int rightHalf (int number){
    return number%100;
}

bool condition(int number){
    //cout << number << " " << leftHalf(number) << " " << rightHalf(number) << endl;
    return number % (leftHalf(number)+ rightHalf(number)) == 0;
}

int main () {
    for (int i=1000;i<10000;i++){
        if (condition(i)){
            cout << i << " is divisible with "<< leftHalf(i) << " + " << rightHalf(i) << endl;
        }
    }
    return 0;
}