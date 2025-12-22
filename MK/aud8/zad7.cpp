//
// Created by Stefan Andonov on 11.12.25.
//


#include<iostream>
using namespace std;

int nzd (int m, int n){
    if (m%n==0){
        return n;
    } else {
        return nzd (n, m%n);
    }
}

int main () {


    int niza [100];
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> niza[i];
    }

    int r = nzd(niza[0], niza[1]);
    for (int i=2;i<n;i++){
        r = nzd(r, niza[i]);
    }

    cout << r;
    return 0;
}