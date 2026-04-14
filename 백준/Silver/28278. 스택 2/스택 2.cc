#include <bits/stdc++.h>
using namespace std;
int N;
stack<string> st;

vector<string> split(string& s,string delimeter){
    vector<string> ret;
    auto start = 0;
    auto end = s.find(delimeter);
    while(end != string::npos){
        ret.push_back(s.substr(start,end-start));
        start = end + delimeter.size();
        end = s.find(delimeter,start);
    }
    ret.push_back(s.substr(start));
    return ret;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> N;
    cin.ignore();
    while(N--){
        string s;
        getline(cin,s);
        vector<string> v = split(s," ");
        if(v.size() == 2){
            st.push(v[1]);
        }
        else{
            if(s[0] == '2'){
                if(!st.empty()){
                    cout << st.top() << "\n";
                    st.pop();
                }
                else{
                    cout << "-1" << "\n";
                }
            }
            else if(s[0] == '3'){
                cout << st.size() << "\n";
            }
            else if(s[0] == '4'){
                if(!st.empty()){
                    cout << 0 << "\n";
                }
                else{
                    cout << 1 << "\n";
                }
            }
            else if(s[0] == '5'){
                if(!st.empty()){
                    cout << st.top() << "\n";
                }
                else{
                    cout << "-1" << "\n";
                }
            }
        }
    }
    return 0;
}