#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;


void func(int n){
    int fac = 1;
    int arr[n]; 
    for(int i = 1; i <= n ; i++){
        arr[i] = i;
        fac = fac * arr[i];
    }
    cout << fac;
}


int main(){
    int a;
    cin >> a;
    func(a);
}