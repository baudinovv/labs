#include <iostream>

using namespace std;


int main(){

    int a;
    cin >> a;

    int arr[a];
    int cnt = 0;

    for(int i = 1; i <= a; i++){
        if(i == 1){
            continue;
        }
        arr[i] = i;
        for(int j = 1; j <= i; j++){
            if(arr[i] % j == 0){
                cnt++;
            }
        }
        if(cnt == 2){
            cout << i << " is prime"<< endl; 
        }
        cnt = 0;
    }
    
    // cout << cnt;

    return 0;
}