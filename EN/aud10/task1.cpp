//
// Created by Stefan Andonov on 25.12.25.
//


#include<iostream>
#include<cstring>
#include<cctype>

using namespace std;

int main () {
    int array[100];
    char str[100];

//    int n;
//    cin >> n;
//    for (int i = 0; i < n; ++i) {
//        cin >> array[i];
//    }

//    cin >> str; //cons: it will stop on the first " "(space)
    cin.getline(str, 100);
    cout << str << endl;
    cout << strlen(str);

    cout << *str;


    return 0;
}