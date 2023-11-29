#include <iostream> 
#include <stdio.h>
 

using namespace std;

int main(){
    int k, even = 0;
    int odd = 0;
    cin >> k;
    int n[k];


    for( int i = 0; i < k; i++){
        cin >> n[i];
        if(n[i] % 2 == 0){
            even += 1;
        }
        else{
            odd += 1;
        }
    }

    cout << even << " " << odd << endl;
}
