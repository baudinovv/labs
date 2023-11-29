#include <iostream>

using namespace std;


int func(string n){
    int cnt = 0;
    bool flag = true;
    for(int i = 0; i < n.size(); i++){   
        if(i % 2 == 0 && n[i] >= 96 && n[i] <= 122 ){
            n[i] = n[i] - 32;
            cout << n[i];
            continue;
        }
        if(i % 2 == 0 && n[i] >= 65 && n[i] <= 90){
            n[i] = n[i] + 32;
        }
        cout << n[i];
    }
    
    return 0;
}


int main(){
    string a;
    cin >> a;

    func(a);
}