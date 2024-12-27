#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (number % 3 == 0 && number % 5 == 0) {
        cout << "The number is divisible by both 3 and 5." << endl;
    } else if (number % 3 == 0) {
        cout << "The number is divisible by 3 only." << endl;
    } else if (number % 5 == 0) {
        cout << "The number is divisible by 5 only." << endl;
    } else {
        cout << "The number is not divisible by either 3 or 5." << endl;
    }
    return 0;
}
