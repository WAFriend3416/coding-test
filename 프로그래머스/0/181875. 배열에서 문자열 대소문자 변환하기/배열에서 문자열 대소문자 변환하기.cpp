#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> answer;
    for(int i=0; i<strArr.size(); i++){
        string tmp = "";
        if(i%2 == 0){ // 짝수번째 인덱스 : 모든 문자를 소문자로
            for(char c : strArr[i]){
                if(int(c) >= 65 && int(c) <= 90){
                    tmp += (c+32);
                }
                else{
                    tmp += c;
                }
            }
            answer.push_back(tmp);
        } 
        else{ // 홀수번째 인덱스 : 모든 문자를 대문자로
            for(char c : strArr[i]){
                if(int(c) >= 97 && int(c) <= 122){
                    tmp += (c-32);
                }
                else{
                    tmp += c;
                }
            }
            answer.push_back(tmp);
        }
    }
    return answer;
}