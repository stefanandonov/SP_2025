//
// Created by Stefan Andonov on 24.11.25.
//10
//1 2 3 3 1 5 5 6 1 4
//

#include<iostream>
using namespace std;

int main() {

    int array[100];
    int n;
    cin >> n;

    for (int i=0;i<n;i++){
        cin >> array[i];
    }


    for (int i=0;i<n;i++){ //gi vrti elementite i pocnuva da bara duplikati desno od niv
        cout << "Checking duplicates for position " << i << endl;
        int k = i+1;
        for (int j=i+1;j<n;j++){
            if (array[i]==array[j]){
                cout << i << " " << j << " (" << array[i] <<")" << endl;
            } else {
                array[k]=array[j];
                k++;
            }
        }
        n=k;
    }

    for (int i=0;i<n;i++){
        cout << array[i] << " "
    }

    return 0;
}