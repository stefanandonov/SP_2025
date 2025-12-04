//
// Created by Stefan Andonov on 1.12.25.
//


#include<iostream>
using namespace std;

int main () {
    int matrix[100][100];

    int n; // m-redici, n-koloni
    cin >> n;

    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cin >> matrix[i][j];
        }
    }

    int max,min;
    max=min=matrix[1][0];

    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if (i==j){
                continue;
            }
            if (matrix[i][j]<min){
                min = matrix[i][j];
            }
            if (matrix[i][j]>max){
                max = matrix[i][j];
            }
        }
    }

    int diff = max - min;

//    for (int i=0;i<n;i++){
//        for (int j=0;j<n;j++){
//            if (i==j){
//                matrix[i][j]=diff;
//            }
//
//        }
//    }

    for (int i=0;i<n;i++){
        matrix[i][i]=diff;
    }

    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++) {
            cout << matrix[i][j] << " ";

        }
        cout << endl;
    }





    return 0;
}