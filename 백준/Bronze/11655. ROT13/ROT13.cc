#include <bits/stdc++.h>
using namespace std;
string s;
int main(){
    getline(cin,s);
    for(char c : s){
        if(c >= 97 && c<=122){ // 소문자
            if(c >= 110) cout << char(c-13);
            else cout << char(c+13);
        }
        else if(c>=65 && c<=90){ // 대문자
            if(c >= 78) cout << char(c-13);
            else cout << char(c+13);
        }
        else{
            cout << c;
        }
    }
    return 0;
}