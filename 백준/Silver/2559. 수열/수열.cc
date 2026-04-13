#include <bits/stdc++.h>
using namespace std;
int N,M;
int a[100005];
int ps[100005];
int main(){
    int max = -10000000;
    cin >> N >> M;
    for(int i=1; i<=N; i++){
        cin >> a[i];
        ps[i] = ps[i-1]+a[i];
    }
    for(int i=M; i<=N; i++){
        int sum = ps[i] - ps[i-M];
        if (max < sum) max = sum;
    }
    cout << max;
    return 0;
}
