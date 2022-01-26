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

    int hour_to_min1 = hour1 * 60 + min1;
    int hour_to_min2 = hour2 * 60 + min2;

    int min_to_sec1 = hour_to_min1 * 60 + sec1;
    int min_to_sec2 = hour_to_min2 * 60 + sec2;

    int diff = min_to_sec2 - min_to_sec1;
    cout << diff;
}
