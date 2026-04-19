#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    bool flag = false;
    string tmp;
    for(char c : my_string){
        if(flag && c == ' '){
            answer.push_back(tmp);
            tmp = "";
            flag = false;
        }
        else if(c == ' ') continue;
        else{
            flag = true;
            tmp += c;
        }
    }
    if(tmp != "") answer.push_back(tmp);
    return answer;
}