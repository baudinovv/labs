#include <iostream>

using namespace std;

int main(){
    int n[6];  
    int team1 = 0;
    int team2 = 0;
    for(int i = 0; i < 6; i++){
        cin >> n[i];
    }

    for(int i = 0; i < 6; i++){
        if(i % 2 == 0){
            team1 += n[i];
        }
        else{
            team2 += n[i];
        }
    }

    if(team1 > team2){
        cout << "Gratz Yelnur";
    }
    if(team1 < team2){
        cout << "Hee Hee Losers";
    }
    if(team1 == team2){
        cout << "Draw";
    }

    return 0;
}