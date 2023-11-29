#include <iostream> 
#include <stdio.h>
 

using namespace std;

int main(){
    int k;
    int number = 0;
    cin >> k;
    int n[k];
    
    for( int i = 0; i < k ; i++){
        cin >> n[i];
        for(int k = 0; n[i] != 0; k++ ){
            if(n[i] % 10 == 0){
                number += 1;
            } 
            n[i] = n[i] / 10;
            if(n[i] == 0){
                break;
            }    
        }
    }
    cout << number << endl;
}
