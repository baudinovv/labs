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
    cin >> k;
    int result = 0;
    sort(arr.begin(), arr.end());
    if(k <= 1){
        cout << arr[arr.size() - 1];
    } else{
        for(int i = 1; i <= k; i++){
            result = result + arr[arr.size() + 1];
            erase(arr.begin() + arr.size(), arr.begin() + arr.size() + 1)
        }
    }
    cout << result;
}