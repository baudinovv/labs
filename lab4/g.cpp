#include <iostream>
#include <cmath>
using namespace std;
#include <iostream>

using namespace std;

int main() 
{
    int a;
    cin>>a;
    int s=a;
    for(int i=0; i<a; i++){
        for(int j=0; j<a; j++){
            if((j+1)==s){
                cout<<i+1;
                s--;
            }
            else{
                cout<<".";
            }
        }
        cout<<endl;
    }
    return 0;
}