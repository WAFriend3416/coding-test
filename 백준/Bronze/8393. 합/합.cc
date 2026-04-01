#include <bits/stdc++.h>
using namespace std;

int N;
int total = 0;
int main(){
    cin >> N;
    for(int i=1; i<=N; i++) total += i;
    cout << total;
    return 0;

}