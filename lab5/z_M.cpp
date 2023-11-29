#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    string s1;
    cin>>s1;
    char c;
    cin>>c;
    int a;
    cin>>a;
    int s=0;
    for(int i=0;i<s1.length(); i++){
        if(s1[i]==c){
            s++;
        }
    }
    if(s==a){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}