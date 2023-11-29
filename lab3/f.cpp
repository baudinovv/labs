#include <iostream> 
#include <stdio.h>
 

using namespace std;

int main(){
    int k;
    cin >> k;
    int n[k];
    long long position = 0;

    for(int i = 0; i < k; i++){
        cin >> n[i];
    }
    
    for(int i = 0; i < k; i++){
        cout << n[k - i - 1] << " ";
    }
}
