#include <bits/stdc++.h>
using namespace std;
int X,N;
int main(){
    cin >> X;
    cin >> N;
    int a,b;
    int total = 0;
    for(int i=0; i<N; i++){
        cin >> a >> b;
        total += (a*b);
    }
    if(X == total){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    return 0;
}