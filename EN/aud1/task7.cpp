//
// Created by Stefan Andonov on 16.10.25.
//

#include<iostream>

using namespace std;

int main (){
    int price;
    cin >> price;

    /*
     * Calculate percentage of something -> x*0.% (e.g. 15% = x*0.15; 5% = x*0.05)
     * Calculate increase in percents of something -> x*1.% (e.g. 15% increase == x * 1.15; 5% increase = x*1.05)
     * Calculate a discount/decrease in percents of something -> x*(1.0-0.%) (e.g. 5% decrease -> x * (1-0.05) = x * 0.95)
     * */

    //1. formula
    float vat = price * 18.0/100;
    cout << price + vat << endl;

    //2. coef multiplication
    cout << price * 1.18 << endl;
    return 0;
}
