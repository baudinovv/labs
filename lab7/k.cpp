#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;


void func(string n){
    char max = n[0];
    for(int i = 1; i < n.size() ; i++){
        if(n[i] > max){
            max = n[i];
        }
    }
    cout << max;
}


int main(){
    string a;
    cin >> a;
    func(a);
}