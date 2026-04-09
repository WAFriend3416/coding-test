#include <bits/stdc++.h>
using namespace std;
int N;
int main(){
    cin >> N;
    while(N--){
        int n;
        int ans = 0;
        map<string,int> mp;
        cin >> n;
        while(n--){
            string s1,s2;
            cin >> s1 >> s2;
            auto it = mp.find(s2);
            if(it != mp.end()){
                mp[s2]++;
            }
            else{
                mp[s2] =1;
            }
        }
        int mul = 1;
        for(auto it : mp){
            mul *= (it.second+1);
        }
        ans = mul -1;
        cout << ans << "\n";
    }
    return 0;
}