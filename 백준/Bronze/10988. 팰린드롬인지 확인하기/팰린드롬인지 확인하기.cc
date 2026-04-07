#include <bits/stdc++.h>
using namespace std;
string s;
int mid;
bool flag = false;
int main(){
    cin >> s;
    mid = s.size()/2;
    for(int i=0; i<=mid; i++){
        if(s[i]-s[s.size()-1-i]){
            flag = true;
            break;
        }
    }
    if(flag) cout << "0";
    else cout << "1";
    return 0;
}