#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;


void func(string n){
    int cnt = 0;
    for(int i = 0; i < n.size(); i++){
        if(n[i] % 2 == 0){
            cnt++;
        }
    }
    cout << cnt;
}


int main(){
    string a;
    cin >> a;
    func(a);
}