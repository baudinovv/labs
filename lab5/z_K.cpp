#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    string s1;
    cin>>s1;
    int s=0;
    for(int i=0;i<s1.length(); i++){
        if(s1[i]=='a'){
            s++;
        }
        else if(s1[i]=='e'){
            s++;
        }
        else if(s1[i]=='i'){
            s++;
        }
        else if(s1[i]=='o'){
            s++;
        }
        else if(s1[i]=='u'){
            s++;
        }
    }
    cout<<s;
    return 0;
}