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
    return 0;
}