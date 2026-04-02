#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int>> v;
bool cmp(pair<int,int> a , pair<int,int> b){
    return a.first > b.first;
}
int main(){
    int N;
    for(int i=1; i<=9; i++){
        cin >> N;
        v.push_back(make_pair(N,i));
    }
    sort(v.begin(),v.end(),cmp);
    cout << v[0].first << "\n" <<v[0].second;
    return 0;
}