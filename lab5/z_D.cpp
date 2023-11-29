#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    string s1,s2="";
    cin>>s1;
    for(int i=s1.length()-1;i>=0; i--){
        s2+=s1[i];
    }
    if(s1==s2){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}