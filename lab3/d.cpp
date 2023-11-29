#include <iostream> 
#include <stdio.h>
 

using namespace std;

int main(){
    int k;
    cin >> k;
    int n[k];
    int position = 0;

    for(int i = 0; i < k; i++){
        cin >> n[i];
    }
    
    for(int i = 0; i < k; i++){
        if(n[i] >= n[0]){
            n[0] = n[i];
            position = i + 1;
        }
    }
    cout << position;
}
