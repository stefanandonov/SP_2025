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

    int k;
    cin >> k;

    int tmp [100];

    for (int i=0;i<k;i++){
        tmp[i]=array[n-k+i];
    }

    for (int i=n-1;i>=k;i--){
        array[i]=array[i-k];
    }

    for (int i=0;i<k;i++){
        array[i]=tmp[i];
    }

    for (int i = 0; i < n; ++i) {
        cout << array[i] << " ";
    }

    return 0;
}