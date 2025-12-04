//
// Created by Stefan Andonov on 4.12.25.
//

#include<iostream>

using namespace std;

int main() {
    int matrix[100][100];

    int n;
    //int n;

    cin >> n;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    bool symmetrical = true;

    for (int i = 0; i < n; ++i) {
        for (int j = i+1; j < n; ++j) {
            if (matrix[i][j]!=matrix[j][i]){
                symmetrical = false;
                break;
            }
        }
        if(!symmetrical){
            break;
        }
    }

    cout << symmetrical;


    return 0;
}