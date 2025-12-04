//
// Created by Stefan Andonov on 1.12.25.
//


#include<iostream>

using namespace std;

int main() {
    int matrix[100][100];

    int n; // m-redici, n-koloni
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    bool symmetric = true;

    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (matrix[i][j] != matrix[j][i]) {
                symmetric = false;
                break;
            }
        }
        if (!symmetric) {
            break;
        }
    }

    cout << symmetric;


    return 0;
}