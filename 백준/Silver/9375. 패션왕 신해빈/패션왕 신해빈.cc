#include <bits/stdc++.h>
using namespace std;
int N;
int main(){
    cin >> N;
    while(N--){
        int n;
        map<string,int> mp;
        cin >> n;
        while(n--){
            string s1,s2;
            cin >> s1 >> s2;
            mp[s2]++;
        }
        long long mul = 1;
        for(auto it : mp){
            mul *= ((long long)it.second+1); // 아무것도 안 입었을때랑 포함해서 경우를 수를 찾는다.
            // A,B 두 종류가 있을때, A를 택하지 않을 때, B를 택하지 않을 때.
        }
        mul--;
        cout << mul << "\n";
    }
    return 0;
}