#include <iostream>
#include <math.h>

using namespace std;


int main(){

    int a;
    int m;
    cin >> a >> m;
    int arr[a][m];

    
    for(int i = 0; i < a; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    
    cout << endl;
    

    for(int i = 0; i < a; i++){
        for(int j = 0; j < m; j++){
            double c = sqrt(arr[i][j]);
            int d = sqrt(arr[i][j]);
            if(c == d){
                arr[i][j] = sqrt(arr[i][j]);
            }
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}