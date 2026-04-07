#include <bits/stdc++.h>
using namespace std;

int main(){
    //cout << char(90+13) << " ";   
    string s;
    getline(cin,s);
    for(int i=0; i<s.size(); i++){
        if(s[i] >= 65 && s[i] <= 90){
            if(s[i] > 77){
                s[i] -= 13;
            }
            else{
                s[i] += 13;
            }
        }
        else if (s[i] >= 97 && s[i] <= 122){
            if(s[i] > 109){
                s[i] -= 13;
            }
            else{
                s[i] += 13;
            }
        }
        else{
            continue;
        }
    }
    cout << s << " ";
    return 0;
}