#include <iostream>

using namespace std;


int func(string n){  
    if(n[0] >= 96 && n[0] <= 122 ){
        n[0] = n[0] - 32;
    }
    cout << n[0];
    return 0;
}


int main(){
    string a;
    cin >> a;

    func(a);
}