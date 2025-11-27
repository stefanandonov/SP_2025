//
// Created by Stefan Andonov on 24.11.25.
//

#include<iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int array[100];
    int min = 0, max = 0;

    for (int i = 0; i < n; ++i) {
        int number;
        cin >> number;
        array[i] = number;
        if (i == 0) {
            max = min = number;
        } else {
            if (number > max) {
                max = number;
            }
            if (number < min) {
                min = number;
            }
        }

    }

    cout << min << endl;
    cout << max << endl;

    cout << "Scaled values:" << endl;
    for (int i = 0; i < n; i++) {
        cout << (float)(array[i] - min)/(max-min) << endl;
    }


    return 0;
}