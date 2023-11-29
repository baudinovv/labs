#include <iostream> 
#include <stdio.h>
 

using namespace std;

int main(){
    int n;
    cin >> n;
    int k = 1;

    cout << k << " ";

    for(int i = 0; i <= n; i++){
        k = k * 2;
        if(k > n){
            break;
        }
        cout << k << " ";
    }
}
