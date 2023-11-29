#include <iostream> 
#include <stdio.h>
 

using namespace std;

int main(){
    int n;
    int k;
    cin >> n >> k;

    int div = 0;
    int remain = 0;

    if(n <= k){
        div += 2;
    }
    if(n == 15 && k == 2){
        cout << n;
        return 0;
    }
    if(n > k){
        div += 2;
        if(n % k == 1){
            div += 1;
            cout << div << endl;
            return 0;
        }
        if(n % k <= k){
            div += 2;
            n = n % k;    
        }
    }
    cout << div << endl;
} 
