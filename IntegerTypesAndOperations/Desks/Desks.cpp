#include "iostream"
using namespace std;
int main(){
    int first {0};
    int second {0};
    int third {0};

    cin >> first >> second >> third;

    int requiredFirst = (first + 1) / 2;
    int requiredSecond = (second + 1) / 2;
    int requiredThird = (third + 1) / 2;

    int required = requiredFirst + requiredSecond + requiredThird;

    cout << required;
}
