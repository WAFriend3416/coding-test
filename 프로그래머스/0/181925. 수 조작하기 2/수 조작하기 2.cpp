#include <string>
#include <vector>
#include <stdlib.h>

using namespace std;

string solution(vector<int> numLog) {
    string answer = "";
        for(int i=1; i<numLog.size(); i++){
        if(numLog[i-1] < numLog[i]){
            if((abs(numLog[i-1] - numLog[i]) == 1)){
                answer += 'w';
            }
            else{
                answer += 'd';
            }
        }
        else{
            if((abs(numLog[i-1] - numLog[i]) == 1)){
                answer += 's';
            }
            else{
                answer += 'a';
            }
        }
    }
    
    return answer;
}