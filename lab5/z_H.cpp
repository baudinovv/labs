#include <iostream>
using namespace std;

bool Amount(string s){
    int a[10];
    for(int i=0; i<10;i++){
        a[i]=0;
    }
    for(int i=0; i<s.length(); i++){
        if(s[i]=='0'){
            a[0]++;
        }
        else if(s[i]=='1'){
            a[1]++;
        }
        else if(s[i]=='2'){
            a[2]++;
        }
        else if(s[i]=='3'){
            a[3]++;
        }
        else if(s[i]=='4'){
            a[4]++;
        }
        else if(s[i]=='5'){
            a[5]++;
        }
        else if(s[i]=='6'){
            a[6]++;
        }
        else if(s[i]=='7'){
            a[7]++;
        }
        else if(s[i]=='8'){
            a[8]++;
        }
        else if(s[i]=='9'){
            a[9]++;
        }
    }
    int q=a[0];
    for(int i=1;i<10;i++){
        if(q<a[i]){
            q=a[i];
        }
    }
    int sum=0;
    for(int i=1; i<10;i++){
        if(a[i]==q){
            sum++;
        }
        else if(a[i]==0){
            sum++;
        }
    }
    if(sum==9){
        return true;
    }
    return false;
}
int main()
{
    string s;
    cin>>s;
    if(Amount(s)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}