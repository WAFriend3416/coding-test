#include <bits/stdc++.h>
using namespace std;
int a[26];
string s;
int main(){
    cin >> s;
    for(char c : s){
        a[c-97]++;
    }
    for(int i : a){
        cout << i << " ";
    }
    return 0;
}