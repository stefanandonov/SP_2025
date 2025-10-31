//
// Created by Stefan Andonov on 31.10.25.
//


#include<iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int number;
        cin >> number;
        int remainder = number % 5; //0,1,2,3,4
        switch (remainder) {
            case 0:
                cout << "-----" << endl;
                break;
            case 1:
                cout << ".----" << endl;
                break;
            case 2:
                cout << "..---" << endl;
                break;
            case 3:
                cout << "...--" << endl;
                break;
            default: //4
                cout << "....-" << endl;
                break;
        }

    }
    return 0;
}