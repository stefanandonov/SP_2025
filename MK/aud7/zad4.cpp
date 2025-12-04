//
// Created by Stefan Andonov on 1.12.25.
//


#include<iostream>

using namespace std;

int main() {
    int matrix[100][100];

    int m, n; // m-redici, n-koloni
    cin >> m >> n;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    int counter = 0;
    for (int i = 1; i < m - 1; ++i) {
        for (int j = 1; j < n - 1; ++j) {
            if (matrix[i][j] == 1 && matrix[i][j - 1] == 1 &&
                matrix[i][j + 1] == 1 && matrix[i - 1][j] == 1
                && matrix[i + 1][j] == 1) {
                ++counter;
                matrix[i][j] = matrix[i][j - 1] = matrix[i][j + 1] = matrix[i - 1][j] = matrix[i + 1][j] = 0;
            }
        }
    }

    cout << counter;
    return 0;
}