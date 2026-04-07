#include <bits/stdc++.h>
using namespace std;
int a[26] = {0};
int main(){
    string s;
    cin >> s;
    for(auto i : s){
        a[(int)i-97]++;
    }
    for(auto j : a){
        cout << j << " ";
    }
    return 0;
}