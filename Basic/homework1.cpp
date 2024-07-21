// get ch character from user and if it is from a-z print smaller case if it is A-Z print upper and if 0-9 print numbers


#include <iostream>

using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    
    if (ch >= 'A' && ch <= 'Z') {
        cout << "The character is an uppercase letter" << endl;
    } else if (ch >= 'a' && ch <= 'z') {
        cout << "The character is a lowercase letter" << endl;
    } else if (ch >= '0' && ch <= '9') {
        cout << "The character is a numeric value" << endl;
    } else {
        cout << "The character is not a letter or a numeric value" << endl;
    }
    
    return 0;
}
