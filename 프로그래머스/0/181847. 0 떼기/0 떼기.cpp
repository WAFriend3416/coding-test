#include <string>
#include <vector>

using namespace std;

string solution(string n_str) {
    string answer = "";
    bool flag = true;
    for(char c : n_str){
        if(flag && c == '0'){
            continue;
        }
        else{
            flag = false;
            answer += c;
        }
    }
    return answer;
}