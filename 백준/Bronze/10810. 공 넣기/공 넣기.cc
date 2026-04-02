#include <bits/stdc++.h>
using namespace std;

vector<pair<int,int>> v; // 바구니 번호, 공 번호
int main(){
    int N,M;
    cin >> N >> M;
    for(int i=1; i<=N; i++){
        v.push_back(make_pair(i,0));
    }
    int a,b,c; // i,j,k
    for(int i=0; i<M; i++){
        cin >> a >> b >> c;
        for(int k=a-1; k<b; k++) v[k].second = c;
    }
    for(auto i : v){
        cout << i.second << " ";
    }
    return 0;
}