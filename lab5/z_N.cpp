#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    string s;
    cin>>s;
    for (auto& x : s) {
        int dist = x - 'a';
 
        if (dist + (x - 'a') >= 26) {
            dist = (dist + (x - 'a')) % 26;
            x = 'a' + dist;
        }
 
        else {
            x = x + dist;
        }
    }
    cout << s << endl;
    return 0;
}