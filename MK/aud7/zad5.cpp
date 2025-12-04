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



    //N=3
    for (int N=2;N<=min(m,n);N++) {
        int sum = 0;
        for (int i = 0; i < N; i++) {
            sum += matrix[i][i];
        }

        for (int i = 1; i < N; i++) {
            sum += matrix[i][0];
        }

        for (int i = 0; i < N - 1; i++) {
            sum += matrix[i][N - 1];
        }
        cout << sum << endl;
    }



    return 0;
}