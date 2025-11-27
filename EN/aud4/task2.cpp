//
// Created by Stefan Andonov on 6.11.25.
//

#include<iostream>
using namespace std;

bool goodNumber(int number){
    while (number>9){
        int ld = number%10;
        int sld = number/10%10;

        if (ld >= sld){
            return false;
        }
        number/=10;
    }
    return true;
}

int main () {

    int n;
    cin >> n;
    int counterGoodNumbers = 0;
    int min;

    for (int i=0;i<n;i++){
        int number;
        cin >> number;
        if (goodNumber(number)){
            ++counterGoodNumbers;
            cout << number << endl;
            if (counterGoodNumbers==1 || number<min){
                min = number;
            }
        }
    }
    cout << min;
    return 0;
}
