//
// Created by anmol on 27-01-2022.
//
#include "iostream"
using namespace std;
int main(){
    int height {0};
    int up {0};
    int down {0};

    int steps = 1 + ((height - up) / (up - down));
    if(((height - up) % (up - down)) > 0){
        cout << steps + 1;
    }
    else {
        cout << steps;
    }
}
