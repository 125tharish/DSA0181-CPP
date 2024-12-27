#include <iostream>
using namespace std;
int main() {
    int N, a = 0, b = 1, next;
    cout << "Enter the number of terms: ";
    cin >> N;
    for (int i = 1; i <= N; i++) {
        cout << a << " ";
        next = a + b;
        a = b;
        b = next;
    }
    cout << endl;
    return 0;
}
