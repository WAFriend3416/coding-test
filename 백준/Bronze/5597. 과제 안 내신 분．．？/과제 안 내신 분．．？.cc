#include <bits/stdc++.h>
using namespace std;
int a[31];
int main(){
    memset(a,0,sizeof(a));
    for(int i=1; i<=30; i++){
        int N;
        cin >>N;
        a[N] = 1;
    }
    int cnt = 1;
    for(int j=1; j<=30; j++){
        if(a[j] == 0) cout << j << " \n";
    }
    return 0;
}