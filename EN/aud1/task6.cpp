//
// Created by Stefan Andonov on 8.10.25.
//

#include<iostream>
using namespace std;

int main (){
    char c;
    cin >> c;
//    cout << c;

    char result = c + ('a'-'A');
    cout << result;
    return 0;
}