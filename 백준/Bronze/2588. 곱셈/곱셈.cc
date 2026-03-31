#include <bits/stdc++.h>
using namespace std;
int main(){
    int NUM1,NUM2;
    cin >> NUM1;
    cin >> NUM2;
    cout << NUM1 * (NUM2%10) << "\n"; // 3
    cout << NUM1 * ((NUM2%100)/10) << "\n"; // 4
    cout << NUM1 * (NUM2/100) << "\n"; // 5
    cout << NUM1 * NUM2<< "\n" ; // 6
    return 0;
}