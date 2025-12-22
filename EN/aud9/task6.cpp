//
// Created by Stefan Andonov on 18.12.25.
//


#include<iostream>
using namespace std;

void transform (int * array, int n){
    int end = n/2;
    if (n%2==1){
        end++;
    }
    for (int i=0;i<end;i++) {
        int sum = array[i] + array[n-i-1];
        array[i] = sum;
        array[n-i-1] = sum;
    }

}

void transformR (int * array, int start, int end){
    if (start>end){
        return ;
    }
    int sum = array[start] + array[end];
    array[start] = sum;
    array[end] = sum;
    transformR(array, start+1, end-1);
}

int main () {

    int array[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> array[i];
    }

//    transform(array, n);
    transformR(array, 0, n-1);

    for (int i = 0; i < n; ++i) {
        cout << array[i] << " ";
    }
    return 0;
}