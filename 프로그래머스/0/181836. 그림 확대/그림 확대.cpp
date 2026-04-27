#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> picture, int k) {
    vector<string> answer;
    for(string s : picture){
        string tmp = "";
        for(int i=0; i<s.length();i++){
            for(int j=0; j<k; j++){
                tmp += s[i];
            }
        }
        for(int j=0; j<k; j++){
            answer.push_back(tmp);
        }
    }
    return answer;
}