//
// Created by Stefan Andonov on 18.12.25.
//


#include<iostream>
using namespace std;

int linearSearch (int * array, int n, int key){ //O(n)
    for (int i=0;i<n;i++){
        if (array[i]==key){
            return i;
        }
    }
    return -1;
}

int binarySearch (int * array, int n, int key){
    int start = 0;
    int end = n;
    while (start<end){
        int middle = (start+end)/2;
        if (array[middle]==key){
            return middle;
        } else if (key > array[middle]){
            start = middle+1;
        } else { //key < array[middle]
            end = middle;
        }
    }
    return -1;
}

int binarySearchR (int * array, int key, int start, int end){
    int middle = (start+end)/2;
    if (array[middle]==key){
        return middle;
    }
    if (start>=end){
        return -1;
    }
    if (key>array[middle]){
        return binarySearchR(array, key, middle+1, end);
    }
    if (key<array[middle]){
        return binarySearchR(array, key, start, middle);
    }
}

int main () {

    int array[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> array[i];
    }

    int key;
    cin >> key;

    cout << binarySearchR(array, key, 0, n);
    return 0;
}