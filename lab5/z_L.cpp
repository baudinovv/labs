#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    string s;
    cin>>s;
    string s1=s;
    int a=0;
	char temp;
	int i, j;
	int n = s.length();
	for (i = 0; i < n-1; i++) {
		for (j = i+1; j < n; j++) {
			if (s[i] > s[j]) {
				temp = s[i];
				s[i] = s[j];
				s[j] = temp;
			}
		}	
	}
    if(s1!=s){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }
    return 0;
}