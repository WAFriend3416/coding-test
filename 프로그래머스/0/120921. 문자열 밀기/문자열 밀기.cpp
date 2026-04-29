#include <string>
#include <vector>

using namespace std;

int solution(string A, string B) {
    int answer = 0;
    int a[26] = {0};
    int b[26] = {0};
    if(A == B) return 0;
    for(char c : A){
        a[int(c)-97]++;
    }
    for(char c : B){
        b[int(c)-97]++;
    }
    for(int i=0; i<26; i++){
        if(a[i] != b[i]){
            return -1;
        }
    }
    int cnt = 0;
    int num = A.length();
    string tmp;
    while(num--){
        A = A[A.length()-1] + A;
        A.erase(A.length()-1,A.length());
        cnt++;
        if(A == B) return cnt;
    }
    return -1;
}