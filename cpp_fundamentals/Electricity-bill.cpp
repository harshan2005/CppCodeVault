#include <iostream>
using namespace std;

int main() {
    int units;
    cin >> units;  // Input the number of units consumed

    double bill;

    if (units <= 200) {
        bill = units * 0.5;  // If units <= 200
    }
    else if (units <= 400) {
        bill = units * 0.65 + 100;  // If 200 < units <= 400
    }
    else if (units <= 600) {
        bill = units * 0.80 + 200;  // If 400 < units <= 600
    }
    else {
        bill = units * 1.25 + 425;  // If units > 600
    }

    // Output the total bill, rounding to the nearest integer
    cout << int(bill + 0.5) << endl;

    return 0;
}

