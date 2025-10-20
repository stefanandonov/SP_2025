//
// Created by Stefan Andonov on 8.10.25.
//

#include<iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    cout << a << '+' << b << '=' << a + b << endl;
    cout << a << '-' << b << '=' << a - b << endl;
    cout << a << '*' << b << '=' << a * b << endl;
    cout << a << '/' << b << '=' << (1.0 * a) / b << endl;
    cout << a << '%' << b << '=' << a % b << endl;
    return 0;
}