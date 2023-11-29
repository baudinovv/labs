#include <iostream>

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

    for(int i = 0; i < a; i++){
        for(int j = 0; j < m; j++){
            if( (i + j) % 2 == 0){
                arr[i][j] = arr[i][j] + 1;     
            }
            if( (i + j) % 2 == 1){
                arr[i][j] = arr[i][j] - 1;
            }    
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}