#include <bits/stdc++.h>
using namespace std;
int main(){
    int H,M,T;
    cin >> H >> M;
    cin >> T;
    if((M+T) >= 60){
       H += (M+T)/60; 
       if(H > 23){
            H -= 24;
       }
       M = (M+T)%60;
    }
    else{       
        M += T;
    }
    cout << H << " " << M;
    
    return 0;
}