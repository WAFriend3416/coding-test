#include <bits/stdc++.h>
using namespace std;
int main(){
    int H,M;
    cin >> H >> M;
    if((M - 45) < 0 ){
        H--;
        if(H < 0){H = 23;}
        M = 60 + (M-45);
    }
    else{
        M = M-45;
    }
    cout << H << " " << M;
    return 0;
}