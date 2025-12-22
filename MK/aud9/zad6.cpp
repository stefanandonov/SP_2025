//
// Created by Stefan Andonov on 15.12.25.
//


#include<iostream>
using namespace std;

void mirror (int * array, int n){
    for (int i=0;i<n/2;i++){
        int sum = array[i] + array[n-i-1];
        array[i]=sum;
        array[n-i-1]=sum;
    }
}

void mirrorR (int * array, int start, int end){
    if (start>=end){
        return ;
    }
    int sum = array[start]+array[end];
    array[start]=sum;
    array[end]=sum;

    mirrorR(array, start+1, end-1);
}

int main () {
    int array[100];

    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> array[i];
    }

    mirrorR(array,0,n-1);

    for (int i = 0; i < n; ++i) {
        cout << array[i] << " ";
    }


    return 0;
}