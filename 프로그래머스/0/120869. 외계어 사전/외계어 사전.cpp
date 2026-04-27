#include <string>
#include <vector>

using namespace std;

int solution(vector<string> spell, vector<string> dic) {
    int answer = 0;
    for(string s : dic){
        vector<int> check;
        for(int i=0; i<spell.size(); i++){
            check.push_back(0);
        }
        for(int i=0; i<s.length(); i++){
            for(int j=0; j<spell.size(); j++){
                if(s[i] == spell[j][0]) check[j]++;
            }
        }
        bool flag = check[0];
        for(int i=1; i<spell.size(); i++){
            flag = check[i] & flag;
        }
        if(flag){
            return 1;
        }
    }
    return 2;
}