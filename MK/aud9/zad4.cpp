//
// Created by Stefan Andonov on 15.12.25.
//


#include<iostream>

using namespace std;

void bubbleSort(int *array, int n) {
    for (int i = 0; i < n; i++) { //run all iterations
        for (int j = 0; j < n - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                swap(array[j], array[j + 1]);
            }
        }
    }
}

int main() {

    int array[100];

    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> array[i];
    }

    bubbleSort(array, n);

    for (int i = 0; i < n; ++i) {
        cout << array[i] << " ";
    }

    return 0;
}