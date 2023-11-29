#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

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
    int k;
    int pos;
    cin >> k;
    vector<int> arr2;
    int min = arr[0];
    sort(arr.begin(), arr.end());
    for(int i = 0; i < k; i++){
        cout << arr[i] << " ";
    }
    if(arr.empty()){
        cout << "no";
    }
}