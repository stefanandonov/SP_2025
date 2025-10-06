//
// Created by Stefan Andonov on 6.10.25.
//

#include<iostream>
using namespace std;

int main (){
    int x1,x2,x3;
    cin >> x1 >> x2 >> x3;

    float average = (x1+x2+x3)/3.0;

    cout << "The average of " << x1;
    cout << ", " << x2 << ", ";
    cout << x3 << " is: " << average;
    return 0;
}