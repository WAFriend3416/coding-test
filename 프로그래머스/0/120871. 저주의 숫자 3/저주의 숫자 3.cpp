#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    for(int i=1; i<=n; i++){
        answer += 1;
        if(answer%3 == 0) answer += 1;
        string tmp = to_string(answer);
        while(tmp.find("3") != string::npos){
            answer += 1;
            tmp = to_string(answer);
        }
        if(answer%3 == 0) answer += 1;
    }
    return answer;
}