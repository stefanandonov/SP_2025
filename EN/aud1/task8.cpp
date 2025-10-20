//
// Created by Stefan Andonov on 16.10.25.
//

#include<iostream>

using namespace std;

int main (){
    int price;
    int rate;
    int installments;
    cin >> price >> installments >> rate;
    float installment = (1+rate/100.0) * (1.0 * price / installments);
    cout << installment << endl;
    cout << installments * installment;
    return 0;
}
