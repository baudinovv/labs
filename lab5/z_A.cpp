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
        if (s[i] >= 'A' && s[i] <= 'Z')
            upper++;
        else if (s[i] >= 'a' && s[i] <= 'z')
            lower++;
    }
    cout<< lower<<' '<<upper;
    return 0;
}