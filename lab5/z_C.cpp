#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    string s1,s2;
    cin>>s1>>s2;
    int res=0;
    for(int i=0;i<s1.length(); i++){
        int s=0;
        for(int j=0;j<s2.length(); j++){
            if(s1[i+j]==s2[j]){
                s++;
            }
        }
        if(s==s2.length()){
            res=1;
        }
    }
    if(res==0){
        cout<<"NO";
    }
    else if(res==1){
        cout<<"YES";
    }
    return 0;
}