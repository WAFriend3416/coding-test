#include <bits/stdc++.h>
using namespace std;
int N,M;
map<string,int> mp;
vector<string> v;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> N >> M;
    for(int i=1; i<=N; i++){
        string s;
        cin >> s;
        v.push_back(s);
        mp[s] = i;
    }
    while(M--){
        string s;
        cin >> s;
        if(atoi(s.c_str())){
            cout << v[stoi(s)-1] << "\n";
        }
        else{
            //cout << "check s : "<< s << "\n";
            cout << mp[s] << "\n";
        }
    }
    return 0;
}