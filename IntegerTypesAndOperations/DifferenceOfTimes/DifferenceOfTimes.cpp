//
// Created by anmol on 26-01-2022.
//
#include "iostream"
using namespace std;
int main(){
    int hour1 {0};
    int min1 {0};
    int sec1 {0};

    int hour2 {0};
    int min2 {0};
    int sec2 {0};

    cin >> hour1 >> min1 >> sec1;
    cin >> hour2 >> min2 >> sec2;

    int hourToMin1 = hour1 * 60 + min1;
    int hourToMin2 = hour2 * 60 + min2;

    int minToSec1 = hourToMin1 * 60 + sec1;
    int minToSec2 = hourToMin2 * 60 + sec2;

    int diff = minToSec2 - minToSec1;
    cout << diff;
}
