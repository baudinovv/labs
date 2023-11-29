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
    
    int cnt = 0;
    for(int i = 0; i < a; i++){
        for(int j = 0; j < m; j++){
            cnt = cnt + arr[i][j];
        }
        cout << "The sum of row number " << i + 1 << " is " << cnt << endl;
        cnt = 0;
    }
    int sum = 0;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < a; j++){
            sum = sum + arr[j][i];
        }
        cout << "The sum of column number " << i + 1 << " is " << sum << endl;
        sum = 0;
    }
    return 0;
}