#include <bits/stdc++.h>
using namespace std;
int N,cnt;
int main(){
    cin >> N;
    while(N--){
        string s;
        cin >> s;
        stack<int> st;
        for(char c : s){
            if(st.empty() || st.top() != c) st.push(c);
            else {st.pop();}
        }
        if(st.empty()) cnt++;
    }
    cout << cnt;
    return 0;
}
