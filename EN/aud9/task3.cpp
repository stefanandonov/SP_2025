//
// Created by Stefan Andonov on 18.12.25.
//


#include<iostream>
using namespace std;

void statistics (int * array, int n, int * max, int * min, int * sum){
    *max = array[0];
    *min = array[0];
    *sum = 0;
    for (int i=0;i<n;i++){
        if (array[i]>*max){
            *max = array[i];
        }
        if (array[i]<*min){
            *min = array[i];
        }
        *sum += array[i];
    }

//    return max,min,sum;
}

int main () {
    int array[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> array[i];
    }

    int max,min,sum;

    statistics(array, n, &max, &min, &sum);

    cout << max << " " << min << " " << sum;
    return 0;
}