#include "iostream"
using namespace std;
int main(){
    int durationOfDays {};
    int foodCostPerDay {};
    int oneWayFlight {};
    int costOfOneNight {};

    cin >> durationOfDays >> foodCostPerDay >> oneWayFlight >> costOfOneNight;
    int finalCost{(durationOfDays - 1) * costOfOneNight};
    finalCost = finalCost + (foodCostPerDay * (durationOfDays));
    finalCost = finalCost + (2 * oneWayFlight);

    cout << finalCost;
}

