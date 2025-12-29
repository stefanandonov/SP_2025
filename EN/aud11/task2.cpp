//
// Created by Stefan Andonov on 29.12.25.
//


#include<iostream>
using namespace std;

int main () {

    int m,n;
    int matrix[100][100];

    cin >> m >> n;

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }

    int r,c;
    cin >> r >> c;

    int rhombusSize = min(r, min(m-1-r, min(c, n-1-c)));


//    int cStart, cEnd;
//    cStart = cEnd = c;
//    int deltaStart = -1;
//    int deltaEnd = 1;
//    int sum = 0;
//    for (int i=r-rhombusSize;i<=r+rhombusSize;i++){
//
//        for (int j=cStart;j<=cEnd;j++){
//            sum+=matrix[i][j];
//        }
//
//        if (i==r){
//            deltaStart = 1;
//            deltaEnd = -1;
//        }
//
//        cStart+=deltaStart;
//        cEnd+=deltaEnd;
//    }

//    cout << rhombusSize;
//    cout << sum;
    int sum = 0;
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            int distance = abs(i-r)+abs(j-c);
            if (distance<=rhombusSize){
                sum+=matrix[i][j];
            }
        }

    }

    cout << sum;
    return 0;
}