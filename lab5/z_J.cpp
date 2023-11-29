#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    string s1;
    cin>>s1;
    string s3="";
    s3+=s1[0];
    for(int i=s1.length()-1;i>=0; i--){
        s3+=s1[i];
    }
    s1+=s1[0];
    if(s1==s3){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}