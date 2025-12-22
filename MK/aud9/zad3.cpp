//
// Created by Stefan Andonov on 15.12.25.
//


#include<iostream>

using namespace std;

void statistics (int * array, int n, int * maxPtr, int * minPtr, int * sumPtr){
    *sumPtr = 0;
    *maxPtr = *minPtr = array[0];
    for (int i = 0; i < n; ++i) {
        *sumPtr += array[i];
        if (array[i]>*maxPtr){
            *maxPtr = array[i];
        }
        if (array[i]<*minPtr){
            *minPtr = array[i];
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

    int max, min, sum;

    statistics(array, n, &max, &min, &sum);

    cout << "Max: " << max << endl;
    cout << "Min: " << min << endl;
    cout << "Sum: " << sum << endl;
    cout << "Average: " << (float) sum/n << endl;
    return 0;
}