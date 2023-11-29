#include <iostream>
#include <string>

using namespace std;

string shiftCharacters(string s) {
    for (char& c : s) {
        if (c == 'z') {
            c = 'a';
        } else if (isalpha(c)) {
            c = static_cast<char>(c + 1);
        }
    }
    return s;
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    string shifted = shiftCharacters(s);
    cout << "Shifted string: " << shifted << endl;

    return 0;
}
