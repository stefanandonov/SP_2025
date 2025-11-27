//
// Created by Stefan Andonov on 24.11.25.
//

#include<iostream>

using namespace std;

int main() {
    int array1[100], array2[100];

    int n1, n2;
    cin >> n1;
    for (int i = 0; i < n1; i++) {
        cin >> array1[i];
    }

    cin >> n2;
    for (int i = 0; i < n2; i++) {
        cin >> array2[i];
    }

    if (n1 != n2) {
        cout << "Not equal";
    } else { //n1==n2

        for (int i=0;i<n1;i++){
            if (array1[i]!=array2[i]){
                cout << "Not equal";
                return 0;
            }
        }
        cout << "Equal";


    }



    return 0;
}