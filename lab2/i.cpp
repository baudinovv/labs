#include <iostream> 
#include <stdio.h>
 

using namespace std;

int main(){
    int k;
    cin >> k;
    int n[k];
    int seven = 0;

    for(int i = 0; i < k; i++){
        cin >> n[i];
        if( n[i] % 10 == 7){
            seven += 1;
        }
    }

    cout << seven << endl;
}
