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
    int min = arr[0];
    sort(arr.begin(), arr.end());
    int result = arr[arr.size() - 1] - arr[0];
    cout << result;
}