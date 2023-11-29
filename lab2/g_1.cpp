#include <iostream> 
#include <stdio.h>
 

using namespace std;

int main(){
    int numint;
    cin >> numint;
    int num[numint];
    
    for(int i = 0; i < numint ; i++ ){
        cin >> num[i];
    }
    int max = num[0];
    
    for(int k = 0; k < numint ; k++){
        if(num[k] > max){
            max = num[k];
        }
    }

    cout << max << endl;
} 
