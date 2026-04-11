#include <bits/stdc++.h>
using namespace std;
string s;
int cnt[1000];
int flag;
int mid;
string ret;
int main(){
    cin >> s;
    for(char c : s) cnt[int(c)]++;
    for(char i = 'Z'; i >= 'A'; i--){
        if(cnt[i]){
            if(cnt[i]&1){
                mid = char(i);flag++;
                cnt[i]--;
            }
            if(flag == 2) break;
            for(int j=0; j<cnt[i]; j+=2){
                ret = char(i) + ret;
                ret += char(i);
            }
        }
    }
    if(mid)ret.insert(ret.begin() + ret.size()/2,mid);
    if(flag == 2) cout << "I'm Sorry Hansoo";
    else cout << ret;
    return 0;
}