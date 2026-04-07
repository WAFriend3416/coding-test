#include <bits/stdc++.h>
using namespace std;
int a[101];
int A,B,C,ans; // 1대 , 2대, 3대
int main(){
    cin >> A >> B >> C;
    for(int i=0; i<3; i++){
        int s,e;
        cin >> s >> e;
        for(int j=s; j<e; j++){
            a[j]++;
        }
    }
    
    for(auto k : a){
        if (k==1) ans += (k*A);
        else if (k==2) ans += (k*B);
        else if (k==3) ans += (k*C);
        else continue;
    }
    cout << ans ;
    return 0;
}