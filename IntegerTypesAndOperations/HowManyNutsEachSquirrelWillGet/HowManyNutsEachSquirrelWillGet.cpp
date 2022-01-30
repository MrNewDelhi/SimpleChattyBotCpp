#include "iostream"
using namespace std;
int main(){
    int numberOfSquirrels {};
    int numberOfNuts {};
    cin >> numberOfSquirrels >> numberOfNuts;
    int distribution{numberOfNuts / numberOfSquirrels};
    cout << distribution;
}
