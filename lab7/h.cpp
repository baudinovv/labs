#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;


void func(int n){
    int arr[40];
    arr[0] = 0;
    arr[1] = 1;
    arr[2] = 1;
    arr[3] = 2;
    for(int i = 4; i < 40; i++){
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    cout << arr[n - 1];
}


int main(){
    int a;
    cin >> a;
    func(a);
}