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

    int p = 0;
    for (int i=0;i<n;i++){
        if (array[i]!=k){
            array[p]=array[i];
            ++p;
        }
    }

    n=p;
    for (int i = 0; i < n; ++i) {
        cout << array[i] << " ";
    }



    return 0;
}