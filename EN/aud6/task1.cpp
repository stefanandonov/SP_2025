//
// Created by Stefan Andonov on 27.11.25.
//

#include<iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int min, max;
    int numbers[100];

    for (int i = 0; i < n; i++) {

        cin >> numbers[i];

        if (i == 0) {
            min = max = numbers[i];
        } else {
            if (numbers[i] > max) {
                max = numbers[i];
            }
            if (numbers[i] < min) {
                min = numbers[i];
            }
        }


    }


    for (int i = 0; i < n; ++i) {
        cout << numbers[i] << "-->" << (float)(numbers[i] - min)/(max-min) << endl;
    }



    return 0;
}