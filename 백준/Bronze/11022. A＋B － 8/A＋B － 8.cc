#include <bits/stdc++.h>
using namespace std;
int T; // test case
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> T;
    int A,B;
    for(int i=1; i<=T; i++){
        cin >> A >> B;
        cout << "Case #" << i << ": " << A << " + " << B << " = " << A+B << "\n";
    }
    return 0;
}