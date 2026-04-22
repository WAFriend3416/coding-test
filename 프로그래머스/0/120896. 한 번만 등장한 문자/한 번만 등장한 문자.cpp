#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int a[26] = {0};
    for(char c : s){
        a[int(c)-97]++;
    }
    for(int i=0; i<26;i++){
        if(a[i] == 1){
            answer += char(i+97);
        }
    }
    return answer;
}