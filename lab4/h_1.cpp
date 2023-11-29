#include <iostream>
#include <math.h>


using namespace std;


int main(){

    string a;
    string b;
    string c;
    string d;
    
    cin >> a >> b;

    int n = b.size() / a.size();
    
    for( int i = 1; i <= n; i++){     
        c = c + a;   
    }

    if(c == b){
        cout << "YES";
    } else{
        
        cout << "NO";
    }

}