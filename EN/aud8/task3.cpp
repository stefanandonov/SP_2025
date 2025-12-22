//
// Created by Stefan Andonov on 11.12.25.
//

#include<iostream>
using namespace std;

void countDownI (int n){
    for (int i=n;i>=0;i--){
        cout << i << endl;
    }
}

void countDownR (int n){
    if (n<0){
        return ;
    } else {
        cout << n << endl;
        countDownR(n-1);
    }
}

void countUpR1 (int counter, int n){ //more complicated solution
    if (counter>n){
        return ;
    } else {
        cout << counter << endl;
        countUpR1(counter+1, n);
    }
}

void countUpR2 (int n){ //more complicated solution
    if (n<0){
        return ;
    } else {
        countUpR2(n-1);
        cout << n << endl;
    }
}

int main () {
//    countDownR(10);
    countUpR2(5);
    return 0;
}
