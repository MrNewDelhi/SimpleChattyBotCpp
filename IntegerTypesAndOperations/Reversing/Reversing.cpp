//
// Created by anmol on 27-01-2022.
//
#include "iostream"
using namespace std;
int main(){
    int original {0};

    cin >> original;

    int digit {original % 10};
    int reverse {digit};
    original = original / 10;

    digit = original % 10;
    reverse = reverse * 10 + digit;
    original = original / 10;

    digit = original % 10;
    reverse = reverse * 10 + digit;
    original = original / 10;

    cout << reverse;

}
