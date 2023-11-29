#include <iostream>
#include <math.h>


using namespace std;

int main(){
    int a;
    cin >> a;
    
    string arr[a][a];

    for(int i = 0; i < a; i++){
        for(int j = 0; j < a; j++){
            cout << "[*]";
            if(i == j){
                break;
            }
        }
        cout << endl;
    }
    

    return 0;
}