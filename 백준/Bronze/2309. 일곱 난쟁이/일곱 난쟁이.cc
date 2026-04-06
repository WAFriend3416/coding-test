#include <bits/stdc++.h>
using namespace std;
const int N = 9;
int a[9];
int sum=0;
int main(){
    int N1,N2;
    for(int i=0; i<N; i++){
        cin >> a[i];
        sum += a[i];
    }
    sort(a,a+9);
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            int tmp = sum;
            if((tmp - a[i] - a[j]) == 100){
                N1 = i;
                N2 = j;
                break;         
            }
        }
    }
    for(auto n : a){
        if(n == a[N1] or n == a[N2]) continue;
        cout << n << " ";
    }
    return 0;
}
