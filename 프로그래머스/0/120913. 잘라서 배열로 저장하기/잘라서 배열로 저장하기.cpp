#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_str, int n) {
    vector<string> answer;
    int cnt =0;
    string tmp = "";
    for(char c : my_str){
        if(cnt == n){
            answer.push_back(tmp);
            tmp = "";
            tmp += c;
            cnt =1;
        }
        else{
            tmp += c;
            cnt++;
        }
    }
    answer.push_back(tmp);
    return answer;
}