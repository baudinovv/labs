#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    string s1,s2,s3="";
    cin>>s1>>s2;
    for(int i=s2.length()-1;i>=0; i--){
        s3+=s2[i];
    }
    if(s1==s3 || s1==s2){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}