#include <bits/stdc++.h>
using namespace std;
int main(){
    int A,B,C,MAX;
    cin >> A >> B >> C;
    MAX = A;
    if(MAX < B){
        MAX = B;
    }
    if (MAX < C)
    {
        MAX = C;
    }
    
    if(A==B && B==C){
        cout << 10000 + (A*1000);
    }
    else if((A==B) && (B != C)){ // A==B
        cout << 1000 + (A*100);
    }
    else if((A==C) && (B != A)){ // A==C
        cout << 1000 + (A*100);
    }
    else if((B==C) && (A != C)){ // B==C
        cout << 1000 + (B*100);
    }
    else{
        cout << MAX * 100;
    }
    return 0;
}