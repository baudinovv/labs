#include <iostream>
#include <math.h>
#include <algorithm> 

using namespace std;


void check(string n){
    int cnt = 0; 
    string a = n;
    bool flag1 = true;
    bool flag2 = true;
    for(int i = n.size()/2 ; i < n.size(); i++){
        a[i] = n[i];
    }
    reverse(a.begin(), a.end());
    if(a == n){
        cout << "Yes";
    } else{
        cout << "No";
    }
}


int main(){
    string a;
    cin >> a;
    check(a);
}