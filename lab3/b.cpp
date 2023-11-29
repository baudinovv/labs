#include <iostream> 
#include <stdio.h>
 

using namespace std;

int main(){
    int k;
    cin >> k;
    int n[k];
    int sum = 0;

    for(int i = 0; i < k; i++){
        cin >> n[i];
        if(n[i] > 0){
            sum += 1;
        }
    }
    cout << sum << endl;
}
