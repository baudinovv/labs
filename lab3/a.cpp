#include <iostream> 
#include <stdio.h>
 

using namespace std;

int main(){
    int k;
    cin >> k;
    int n[k];

    for(int i = 0; i < k; i++){
        cin >> n[i];
        if(n[i] % 2 == 1){
            cout << n[i] << " ";
        }
    }
}
