//
// Created by Stefan Andonov on 4.12.25.
//

#include<iostream>

using namespace std;

int main() {
    int matrix[100][100];

    int m, n;
    //int n;

    cin >> m >> n;

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    int sumEvenRows = 0, sumOddColumns = 0;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; j++) {
            if (j%2==1){
                sumOddColumns+=matrix[i][j];
            }
            if (i%2==0){
                sumEvenRows+=matrix[i][j];
            }
        }
    }

    cout << abs(sumEvenRows-sumOddColumns);
    return 0;
}