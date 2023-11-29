#include <iostream> 
#include <stdio.h>
 

using namespace std;

int main(){
    long long int k;
    cin >> k;
    long long int n[k];
    long long int cnt = 0;

    for(int i = 0; i < k; i++){
        cin >> n[i];
    }
    
    for(int i = 0; i < k; i++){
        if(n[i] >= n[0]){
            n[0] = n[i];
            cnt++;
        }
    }
    cout << cnt;
}
