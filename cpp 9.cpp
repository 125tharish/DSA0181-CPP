#include <iostream>
using namespace std;
int main() {
    int units;
    double bill = 0.0;
    cout << "Enter the number of units consumed: ";
    cin >> units;
    if (units <= 100) {
        bill = units * 5.0;
    } else if (units <= 300) {
        bill = (100 * 5.0) + ((units - 100) * 8.0); 
    } else {
        bill = (100 * 5.0) + (200 * 8.0) + ((units - 300) * 10.0);
    }
    cout << "The total electricity bill is: ?" << bill << endl;
    return 0;
}
