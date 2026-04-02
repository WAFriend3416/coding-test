#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,M;
    cin >> N >> M;
    vector<int> v{0};
    for(int i=1; i<=N; i++){
        v.push_back(i);
    }
    for(int i=0; i<M; i++){
        int A,B;
        cin >> A >> B;
        reverse(v.begin()+A,v.begin()+B+1);
    }

    for(int i=1; i<=N; i++){
        cout << v[i] << " ";
    }
    return 0;
}