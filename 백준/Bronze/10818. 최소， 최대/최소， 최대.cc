#include <bits/stdc++.h>
using namespace std;
vector<int> a;
int main(){
    int N;
    cin >> N;
    for(int i=0; i<N; i++){
        int T;
        cin >> T;
        a.push_back(T);
    }
    cout << *min_element(a.begin(),a.end()) << " "<< *max_element(a.begin(),a.end());
    return 0;
}