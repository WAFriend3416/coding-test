#include <bits/stdc++.h>
using namespace std;
int N,M;
map<string,int> mp1;
map<int,string> mp2;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> N >> M;
    for(int i=1; i<=N; i++){
        string s;
        cin >> s;
        mp1[s] = i;
        mp2[i] = s;
    }
    while(M--){
        string s2;
        cin >> s2;
        if(atoi(s2.c_str())) cout << mp2[stoi(s2)] << "\n";
        else cout << mp1[s2] << "\n";
    }
    return 0;
}
