#include <iostream>
using namespace std;
int main() {
    int number, reversedNumber = 0, remainder, originalNumber;
    cout << "Enter a number: ";
    cin >> number;
    originalNumber = number;
    while (number != 0) {
        remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number /= 10;
    }
    if (originalNumber == reversedNumber) {
        cout << originalNumber << " is a palindrome." << endl;
    } else {
        cout << originalNumber << " is not a palindrome." << endl;
    }
    return 0;
}
