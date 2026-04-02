#include <bits/stdc++.h>
using namespace std;
set<int> s;
int main(){
    int N;

    for(int i=0; i<10; i++){
        cin >> N;
        s.insert(N%42);
    }

    cout << s.size();
    return 0;
}