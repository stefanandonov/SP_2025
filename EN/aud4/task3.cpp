//
// Created by Stefan Andonov on 6.11.25.
//

#include<iostream>
#include<cmath>

using namespace std;

int main() {
    double x = 25.5025;
    cout << "Square root of " << x << " is " << sqrt(x) << endl;
    cout << "Absolute value of " << x << " is " << fabs(x) << endl;
    cout << "Floor of " << x << " is " << floor(x) << endl;
    cout << "Ceil of " << x << " is " << ceil(x) << endl;
    cout << x << "^" << 4 << " is " << pow(x,4.0) << endl;
    return 0;
}
