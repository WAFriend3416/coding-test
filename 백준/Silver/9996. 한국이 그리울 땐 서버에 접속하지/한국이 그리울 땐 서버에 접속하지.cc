#include <bits/stdc++.h>
using namespace std;
int N, prefSize, sufSize;
string pattern,pref,suf;
int main(){
    cin >> N;
    cin >> pattern;
    auto star = pattern.find("*");
    
    pref = pattern.substr(0,star);
    prefSize = pref.size();
    suf = pattern.substr(star+1);
    sufSize = suf.size();

    for(int i=0; i<N; i++){
        string s;
        cin >> s;
        //auto sufPos = s.find(suf);
        //cout << s.substr(0,prefSize) << " " <<  s.substr(s.size()-sufSize,s.size()-1) << "\n";
        if(s.size() < prefSize + sufSize){
            cout << "NE\n";
            continue;
        }
        if(s.substr(0,prefSize) == pref && s.substr(s.size()-sufSize) == suf){
            cout << "DA" << "\n";
        }
        else{
            cout << "NE" <<"\n";
        }
    }

    return 0;
}