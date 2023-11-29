#include <iostream>
#include <algorithm> 

using namespace std;





int main(){
    int a;
    int b;
    cin >> a >> b;
    int arrA[a];
    int i = 0;
    while(i < a){
        cin >> arrA[i];
        i++;
    }
    if((a - b) >= 2){
        cout << "cheater";
    } else{
        cout << "no";
    }
}