//
// Created by Stefan Andonov on 24.11.25.
//

#include<iostream>
using namespace std;

int main() {
    int array[100];

    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> array[i];
    }

    bool ascending = true;
    bool descending = true;

    for (int i=1;i<n;i++){
        //ascending a[i]>a[i-1] -> reverse -> a[i]<=a[i-1]
        if (array[i]<=array[i-1]){
            ascending=false;
        }

        //descending a[i]<a[i-1] -reverse--> a[i]>=a[i-1]
        if (array[i]>=array[i-1]){
            descending=false;
        }

        if (!ascending && !descending){
            break;
        }
    }

    if (ascending){
        cout << "ascending" << endl;
    } else if (descending){
        cout << "descending" << endl;
    } else {
        cout << "nor ascending nor descending" << endl;
    }


    return 0;
}