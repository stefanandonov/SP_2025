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


    for (int i=0;i<n;i++){
        int p = i+1;
        for (int j=i+1;j<n;j++){
            if (array[i]!=array[j]){
                array[p]=array[j];
                ++p;
            }
        }
        n=p;
    }


    for (int i = 0; i < n; ++i) {
        cout << array[i] << " ";
    }


    return 0;
}