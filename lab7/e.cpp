#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;


void check(int n){
    for(int i = 0; true; i++){
        if(n == pow(2, i)){
            cout << "Yes";
            break;
        }
        if(pow(2, i) > n){
            cout << "No";
            break;
        }
    }
}


int main(){
    int a;
    cin >> a;

    check(a);
}