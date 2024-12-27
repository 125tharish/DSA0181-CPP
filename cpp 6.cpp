#include <iostream>
#include <cctype>
using namespace std;
int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    if (isalpha(ch)) { 
        char lowerCh = tolower(ch); 
        if (lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || lowerCh == 'o' || lowerCh == 'u') {
            cout << ch << " is a vowel." << endl;
        } else {
            cout << ch << " is a consonant." << endl;
        }
    } else if (isdigit(ch)) { 
        cout << ch << " is a digit." << endl;
    } else { 
        cout << ch << " is a special character." << endl;
    }
    return 0;
}
