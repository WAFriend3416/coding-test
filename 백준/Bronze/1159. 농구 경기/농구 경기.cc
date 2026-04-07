#include <bits/stdc++.h>
using namespace std;
int a[26];
int N;
bool flag = true;
int main(){
    cin >> N;
    for(int i=0; i<N; i++){
        string s;
        cin >> s;
        a[s[0]-97]++;
    }
    for(int j=0; j<26; j++){
        if(a[j] >= 5){
            flag = false;
            cout << char(j+97);
        }
    }
    if(flag) cout << "PREDAJA";
    return 0;
}