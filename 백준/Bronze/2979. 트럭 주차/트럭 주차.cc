#include <bits/stdc++.h>
using namespace std;
int a[101];
int A,B,C,sum;
int main(){
    cin >> A >> B >> C;
    for(int i=0; i<3; i++){
        int S,E;
        cin >> S >> E;
        for(int j = S; j<E; j++){
            a[j]++;
        }
    }
    for(int k : a){
        if(k == 1) sum += (k*A);
        else if(k == 2) sum += (k*B);
        else sum += (k*C);
    }
    cout << sum;
    return 0;
}