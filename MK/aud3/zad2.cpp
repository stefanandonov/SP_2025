//
// Created by Stefan Andonov on 20.10.25.
//

#include<iostream>
using namespace std;

int main () {
    int x,n;
    cin >> x >> n;

    int result = 1;
    for (int i=0;i<n;i++){
        result *= x;
    }
    cout << result;
    return 0;
}
