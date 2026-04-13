#include <bits/stdc++.h>
using namespace std;
bool flag = true;
int N,a[26];
int main(){
    cin >> N;
    while(N--){
        string s;
        cin >> s;
        a[s[0]-97]++;
    }
    for(int i=0; i<26; i++){
        if(a[i] >= 5) {
            flag = false;
            cout << char(i+97);
        }
    }
    if(flag)cout << "PREDAJA";
    return 0;
}