#include <bits/stdc++.h>
using namespace std;
multiset<int> a;
int main(){
    int N,T,cnt=0;
    cin >> N;
    for(int i=0; i<N; i++){
        int tmp;
        cin >> tmp;
        a.insert(tmp);
    }
    cin >> T;
    cout << a.count(T);
    // for(auto i : a){
    //     if(i == -1000){
    //         break;
    //     }
    //     if(i == T){
    //         cnt++;
    //     }
    // }
    //cout << cnt;
    
    return 0;
}