#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    string s;
    cin>>s;
    int upper = 0, lower = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z'){
            s[i]=toupper(s[i]);
        }
        cout<<s[i];
    }
    return 0;
}