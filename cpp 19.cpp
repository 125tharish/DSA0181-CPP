#include <iostream>
using namespace std;
int main() {
    int number, flag = 0;
    cout << "Enter a number: ";
    cin >> number;
    for (int i = 2; i <= number / 2; i++) {
        if (number % i == 0) {
            flag = 1;
            break;
        }
    }
    if (number <= 1) {
        cout << number << " is not a prime number." << endl;
    } else if (flag == 0) {
        cout << number << " is a prime number." << endl;
    } else {
        cout << number << " is not a prime number." << endl;
    }
    return 0;
}
