#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>

using namespace std;





int main(){
    int a;
    int b;
    cin >> a >> b;
    vector<int> arr;
    long digit1 = a;
    long pos = 0;
    long digit = 1;
    int i = 0;
    string sys16 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    if(b >= 16 && a >= 10){
        pos = a % 10; 
        cout << sys16[pos];
        return 0;
    }
    for(int i = 0; digit1 != 0; i++){
        digit = digit1 % b;
        arr.push_back(digit);
        digit1 = digit1 / b; 
    }
    reverse(arr.begin(), arr.end());
    for(int i = 0; i < arr.size(); i++){
        if(b >= 16 && arr[i] >= 10){
            pos = arr[i] / 10;
            cout << sys16[pos - 1];
            continue;
        }
        cout << arr[i];
    }
    i = -1;
    while( i < arr.size()){
        i++;
        if(b >= 16 && arr[i] >= 10){
            pos = arr[i] / 10;
            cout << sys16[pos - 1];
            continue;
        }
        cout << arr[i];
    }
    if(arr.empty()){
        cout << "huinya, peredelivay";
    }
}