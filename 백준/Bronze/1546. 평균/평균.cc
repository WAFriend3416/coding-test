#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    int max = 0;
    vector<double> v;
    for(int i=0; i<N; i++){
        int T;
        cin >> T;
        if(max < T) max =T;
        v.push_back(T);
    }
    for(int i=0; i<N; i++){
        v[i] = ((double)v[i]/(double)max)*100;
    }
    cout << accumulate(v.begin(),v.end(),0.0) / (double)N;
    return 0;
}