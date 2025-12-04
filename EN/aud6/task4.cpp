//
// Created by Stefan Andonov on 27.11.25.
//

#include<iostream>
using namespace std;

int main () {
    int n;
    cin >>n;
    int array[100];
    for (int i = 0; i < n; ++i) {
        cin >> array[i];
    }

//    0 points for this on midterm!
//    cout << array[n-1] << " ";
//    for (int i = 0; i < n-1; ++i) {
//        cout << array[i] << " ";
//    }

//    1. put last element in temp
    int temp = array[n-1];

    //2. push 1 element to the right
    for (int i=n-1;i>=1;i--){
        array[i]=array[i-1];
    }

    //3. put back the pushed out value in the front
    array[0] = temp;

    for (int i = 0; i < n; ++i) {
        cout << array[i] << " ";
    }
    return 0;
}