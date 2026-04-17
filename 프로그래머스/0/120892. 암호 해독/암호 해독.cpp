#include <string>
#include <vector>

using namespace std;

string solution(string cipher, int code) {
    string answer = "";
    int cnt = 0;    
    for(char c : cipher){
        cnt++;
        if(cnt == code){
            answer += c;
            cnt = 0;
        }
    }
    return answer;
}