#include <bits/stdc++.h>
using namespace std;
int N;
string p;
string pref,suf;
int main(){
    cin >> N;
    cin >> p;
    auto it = p.find('*');
    pref = p.substr(0,it);
    suf = p.substr(it+1);
    while(N--){
        string s;
        bool flag = true;
        cin >> s;
        if(s.size() < pref.size() + suf.size()){
            cout << "NE" << "\n";
            continue;
        } 
        if(s.substr(0,pref.size()) != pref || s.substr(s.size()-suf.size()) != suf){
            flag = false;
            cout << "NE" << "\n";
        }
        if(flag) cout << "DA" << "\n";
    }
    return 0;
}