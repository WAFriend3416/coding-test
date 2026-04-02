#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int>> v; // 바구니 번호, 공 번호
int main(){
    int N,M;
    cin >> N >> M;
    for(int i=1; i<=N; i++){
        v.push_back(make_pair(i,i));
    }
    while(M--){
        int A,B;
        cin >> A >> B;
        int tmp;
        tmp = v[A-1].second;
        v[A-1].second = v[B-1].second;
        v[B-1].second = tmp;
    }
    for(auto i : v) cout << i.second << " ";
    return 0;
}