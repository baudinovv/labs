#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;


int main(){
    int a;
    cin >> a;
    vector<int> arr;
    int digit;
    for(int i = 0; i < a; i++){
        cin >> digit;
        arr.push_back(digit);
    }
    int b;
    int c;
    cin >> b >> c;
    swap(arr[b], arr[c]);
    for(int i = 0; i < a; i++){
        cout << arr[i] << " ";
    }
}