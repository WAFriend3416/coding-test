#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    while (cin >> n) {
        int length = 1;         
        long long rem = 1 % n; 
        while (rem != 0) {
            rem = (rem * 10 + 1) % n;
            length++;
        }   
        cout << length << "\n";
    }
    return 0;
}