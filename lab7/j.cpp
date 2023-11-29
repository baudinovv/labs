#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;


void almat(int n){
    int cnt = 0; 
    for(int i = 0; true; i++){
        cnt = cnt + ((n % 10) / 2);
        n = n / 10;
        if(n == 0){
            break;
        }
    }
    cout << (float) cnt;
}


int main(){
    int a;
    cin >> a;
    almat(a);
}