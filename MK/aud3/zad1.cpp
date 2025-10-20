//
// Created by Stefan Andonov on 20.10.25.
//

#include<iostream>
using namespace std;

int main () {
    int sum = 0;
    for (int i=11;i<=99;i++){
        if (i%2==1){
            sum+=i;
        }

    }
    cout << sum;
    return 0;
}
