#include <bits/stdc++.h>
using namespace std;
const int N = 9;
vector<int> v;
int main(){
    for(int i =0; i<N; i++){
        int n;
        cin >> n;
        v.push_back(n);        
    }
    
    sort(v.begin(),v.end());

    do{
        int sum = 0;
        for(int j=0; j<7; j++){
            sum += v[j];
        }
        if(sum == 100){
            for(int j=0; j<7; j++){
                cout << v[j] << "\n";
            }    
            break;
        }
    }while(next_permutation(v.begin(),v.end()));
}