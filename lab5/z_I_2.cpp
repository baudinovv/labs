#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
bool areStringsNearlyEqual(const std::string &s, const std::string &t) {
    unordered_map<char, int> countS;
    unordered_map<char, int> countT;

    for (char c : s) {
        countS[c]++;
    }

    for (char c : t) {
        countT[c]++;
    }

    return countS == countT;
}

int main() {
    string s, t;
    cin >> s>>t;

    if (areStringsNearlyEqual(s, t)) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}