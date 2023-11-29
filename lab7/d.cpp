
#include <iostream> 
using namespace std; 
 
int sumOfDigits(string s, int cnt, int summa) 
{ 
    if (s.size() == cnt) 
    { 
        return summa; 
    } 
    summa = summa + s[cnt] - '0'; 
 
    return sumOfDigits(s, cnt + 1, summa); 
} 
 
int main() 
{ 
    string s; 
    cin >> s; 
    int cnt = 0; 
    int summa = 0; 
    cout << sumOfDigits(s, cnt, summa); 
    return 0; 
}