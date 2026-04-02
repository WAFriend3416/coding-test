#include <bits/stdc++.h>
using namespace std;
int a[10005];
int main(){
    fill(a,a+10005,0);
    int N,X;
    cin >> N >> X;
    for(int i =0; i<N; i++){
        cin >> a[i];
        if(a[i] < X) cout << a[i] << " ";
    }
    return 0;
}