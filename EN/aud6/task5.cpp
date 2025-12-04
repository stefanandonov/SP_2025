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

    int k;
    cin >> k;

//    0 points for this on midterm!
//    cout << array[n-1] << " ";
//    for (int i = 0; i < n-1; ++i) {
//        cout << array[i] << " ";
//    }

//    1. put last k elements in temp
    int temp[100];
    for (int i=0;i<k;i++){
        temp[i]=array[n-k+i];
    }

    //2. push k elements to the right
    for (int i=n-1;i>=k;i--){
        array[i]=array[i-k];
    }

    //3. put back the pushed out values in the front
    for (int i=0;i<k;i++){
        array[i]=temp[i];
    }

    for (int i = 0; i < n; ++i) {
        cout << array[i] << " ";
    }
    return 0;
}