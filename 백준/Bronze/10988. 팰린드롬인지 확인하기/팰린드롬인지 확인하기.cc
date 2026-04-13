#include <bits/stdc++.h>
using namespace std;
bool flag = true;
string s;
int main(){
    cin >> s;
    int N = s.size();
    int mid = N/2;
    for(int i=0; i<mid; i++){
        if(s[i] != s[N-i-1]){
            flag = false;
            cout << 0;
            break;
        }
    }
    if(flag) cout << 1;
    return 0;
}