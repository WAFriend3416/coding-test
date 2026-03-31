#include <bits/stdc++.h>
using namespace std;
int main(){
    int X,Y;
    cin >> X;
    cin >> Y;
    if(X > 0 && Y > 0){
        cout << "1";
    }
    else if (X > 0 && Y <0)
    {
        cout << "4";
    }
    else if (X < 0 && Y <0)
    {
        cout << "3";
    }
    else{
        cout << "2";
    }
    return 0;
}