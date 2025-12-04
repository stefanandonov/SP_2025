//
// Created by Stefan Andonov on 27.11.25.
//

#include<iostream>
using namespace std;

int main () {
    int n;
    cin >> n;

    int array[100];
    for (int i = 0; i < n; ++i) {
        cin >> array[i];
    }

//    int counterAsc = 0, counterDesc = 0;
//    for (int i = 0; i < n-1; ++i) {
//        if (array[i]<array[i+1]){
//            ++counterAsc;
//        }
//        if (array[i]>array[i+1]){
//            ++counterDesc;
//        }
//    }
//
////    cout << counterDesc;
//
//    if (counterAsc==n-1){
//        cout << "ASC";
//    } else if (counterDesc==n-1){
//        cout << "DESC";
//    } else {
//        cout << "X";
//    }


    bool asc = true, desc = true;
    for (int i = 0; i < n-1; ++i) {
        if (array[i]>=array[i+1]){
            asc = false;
        }
        if (array[i]<=array[i+1]){
            desc = false;
        }
    }

    if (asc){
        cout << "asc";
    } else if (desc) {
        cout << "desc";
    } else {
        cout << "X";
    }


    return 0;
}