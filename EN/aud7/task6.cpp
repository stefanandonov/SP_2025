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


    for (int Z=2;Z<min(m,n);Z++){
        int sum = 0;

        //top line in the letter Z
        for (int j = 0; j < Z-1; ++j) {
            sum+=matrix[0][j];
        }

        //diagonal line of letter Z
        for (int i = 0; i < Z ; ++i) {
            sum+=matrix[i][Z-i-1];
        }

        //bottom line of letter Z
        for (int j = 1; j < Z; ++j) {
            sum+=matrix[Z-1][j];

        }
        cout << sum << endl;
    }



    return 0;
}