#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;



int main(){
    int a;
    cin >> a;
    
    vector<int> arr;

    for(int i = 0; i < a; i++){
        int c;
        cin >> c;
        arr.push_back(c);
    }
    
    sort(arr.begin(), arr.end());

    for(int i = 0; i < a; i++){
        cout << arr.at(i) << " ";
    }
}