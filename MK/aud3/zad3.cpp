//
// Created by Stefan Andonov on 20.10.25.
//

#include<iostream>
using namespace std;

int main () {
    int counter = 0;
    for (int i=9999;i>=1000;i--){
        int d4 = i%10;
        int d3 = i/10%10;
        int d2 = i/100%10;
        int d1 = i/1000;

        if ((d4+d3+d2)==d1){
            cout << i << endl;
            counter++;
            if (counter==10){
                break;
            }
        }

    }
    return 0;
}
