//
// Created by Stefan Andonov on 31.10.25.
//


#include<iostream>
using namespace std;

int main () {
    int a,b;
    cin >> a >> b;

    int counter = 0;

    for (int i=b;i>=a;i--){
        // i == every possible number [a,b]

        int tmp = i;
        int reverse = 0;

        while (tmp>0){
            int ld = tmp%10;
            reverse = 10 * reverse + ld;
            tmp/=10;
        }

        if (i==reverse){
            cout << i << endl;
            ++counter;
            if (counter==30){
                break;
            }
        }

    }
    return 0;
}