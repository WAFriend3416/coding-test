#include <bits/stdc++.h>
using namespace std;
int N,M,cnt;
int a[15005];
int main(){
    cin >> N >> M;
    for(int i=0; i<N; i++){
        cin >> a[i];
    }
    if(M > 200000){
        cout << 0;
        exit(0);
    }
    for(int i=0; i<N-1; i++){
        for(int j=i+1; j<N; j++){
            if((a[i] + a[j])==M) cnt++;
        }
    }
    cout << cnt;
    return 0;
}
