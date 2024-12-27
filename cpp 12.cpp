#include <iostream>
using namespace std;
int main() {
    int number;
    unsigned long long factorial = 1; 
    cout << "Enter a non-negative integer: ";
    cin >> number;
    if (number < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        int i = 1; 
        while (i <= number) {
            factorial *= i; 
            i++;           
        }
        cout << "The factorial of " << number << " is: " << factorial << endl;
    }

    return 0;
}
