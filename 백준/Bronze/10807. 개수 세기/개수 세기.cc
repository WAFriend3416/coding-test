#include <bits/stdc++.h>
using namespace std;
int a[105];
int main(){
    int N,T,cnt=0;
    cin >> N;
    fill(a,a+105,-1000);
    for(int i=0; i<N; i++){
        cin >> a[i];
    }
    cin >> T;
    for(auto i : a){
        if(i == -1000){
            break;
        }
        if(i == T){
            cnt++;
        }
    }
    cout << cnt;
    
    return 0;
}