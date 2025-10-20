//
// Created by Stefan Andonov on 13.10.25.
//


#include<iostream>

using namespace std;

int main() {

    int year;
    cin >> year;

    cout << "(year > 18) -> " << (year > 18) << endl;
    cout << "(year >= 18) -> " << (year >= 18) << endl;
    cout << "(year < 18) -> " << (year < 18) << endl;
    cout << "(year <= 18) -> " << (year <= 18) << endl;
    cout << "(year == 18) -> " << (year == 18) << endl;
    cout << "(year != 18) -> " << (year != 18) << endl;

    if (year>=18){
        cout << "You can buy alcohol! Lucky you." << endl;
        if (year>=18 && year<=23){
            cout << "You are a student, you need it." << endl;

        }
    } else {
        cout << "You have to be legal of age to buy alcohol!" << endl;
    }

    return 0;
}