#include <iostream> 
#include <stdio.h>
 

using namespace std;

int main(){
    int k;
    cin >> k;
    int cnt = 0;
    for(int i = 1; i <= k; i++){
        if(k % i == 0){
            cnt++;
        }
    }
    if(cnt == 2){
        cout << "Yes";
    } else{
        cout << "No";
    }
}
