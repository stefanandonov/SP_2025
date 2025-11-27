//
// Created by Stefan Andonov on 24.11.25.
//

#include<iostream>
using namespace std;

int main() {
    int array[100];
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> array[i];
    }

//    Tocno, no 0 poeni na ispit! Nema transformacija
//    cout << array[n-1] << " ";
//
//    for (int i = 0; i < n-1; ++i) {
//        cout << array[i] << " ";
//    }

    int tmp = array[n-1];

    for (int i=n-1;i>=1;i--){
        array[i]=array[i-1];
    }

    array[0] = tmp;

    for (int i = 0; i < n; ++i) {
        cout << array[i] << " ";
    }

    return 0;
}