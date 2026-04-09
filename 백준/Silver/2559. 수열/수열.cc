#include <bits/stdc++.h>
using namespace std;
int a[100005];
int ps[100005];
int N,K;
int main(){
    cin >> N >> K;
    for(int i=1; i<=N; i++){
        int n;
        cin >> a[i];
        ps[i] += ps[i-1] + a[i];
    }
    int MAX = ps[K];
    for(int j=K; j<=N; j++){
        int sum = ps[j] - ps[j-K];
        if(MAX < sum) MAX = sum;
    }
    cout << MAX;
    return 0;
}