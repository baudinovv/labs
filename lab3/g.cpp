#include <iostream> 
#include <stdio.h>
 

using namespace std;

int main(){
    int k;
    cin >> k;
    int n[k];
    long long maximum = 0;
    long long minimum = 0;

    for(int i = 0; i < k; i++){
        cin >> n[i];
        cout << n[i] << " ";
    }
    
    maximum = n[0];
    for(int i = 0; i < k; i++){
        if(n[i] >= maximum){
            maximum = n[i];
        }
    }
    minimum = n[0];
    for(int i = 0; i < k; i++){
        if(n[i] <= minimum){
            minimum = n[i];
        }
    }
    int max = n[0];
    for(int i = 0; i < k; i++){
        if(n[i] > n[0]){
            max = n[i];
        }
    }
    
}
