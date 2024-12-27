#include <iostream>
using namespace std;
int main() {
    double angle1, angle2, angle3;
    cout << "Enter the first angle of the triangle: ";
    cin >> angle1;
    cout << "Enter the second angle of the triangle: ";
    cin >> angle2;
    cout << "Enter the third angle of the triangle: ";
    cin >> angle3;
    if (angle1 > 0 && angle2 > 0 && angle3 > 0 && (angle1 + angle2 + angle3 == 180)) {
        cout << "The angles form a valid triangle." << endl;
    } else {
        cout << "The angles do not form a valid triangle." << endl;
    }
    return 0;
}
