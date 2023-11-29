#include <iostream>
#include <cmath>
using namespace std;

char findFurthestChar(const std::string &s) {
    char furthestChar = '\0';  // Initialize with a null character
    int maxAsciiValue = 'a' - 1;  // Initialize with a value lower than 'a'

    for (char c : s) {
        int asciiValue = static_cast<int>(c);
        if (asciiValue > maxAsciiValue) {
            maxAsciiValue = asciiValue;
            furthestChar = c;
        }
    }

    return furthestChar;
}

int main() {
    string s;
    cin>>s;
    char result = findFurthestChar(s);
    cout << result << endl; 
    return 0;
}