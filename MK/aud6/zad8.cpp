//
// Created by Stefan Andonov on 24.11.25.
//

#include<iostream>
using namespace std;

int main() {
    //Input: 8 7 8 8 1 2 1 1 5 .
    //Output: 1->3;2->1;5->1;7->1;8->3

    int digit;
    int counters [10] = {0};
    while (cin>>digit){
        if (digit>=10){
            continue;
        }

        counters[digit]++;
    }

    for (int i = 0; i < 10; ++i) {
        if (counters[i]>0) {
            cout << i << "->" << counters[i] << endl;
        }
    }


    return 0;
}