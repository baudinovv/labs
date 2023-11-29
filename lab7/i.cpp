#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){
    int arrA[436];
    long cnt = 0;
    for(int i = 0; true; i++){
        cin >> arrA[i];
        cnt = cnt + arrA[i];
        if(arrA[i] == 0){
            break;
        }
    }
    cout << cnt;
}