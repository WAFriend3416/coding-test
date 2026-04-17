#include <string>
#include <vector>

using namespace std;

int solution(int num, int k) {
    int answer = 0;
    bool flag = true;
    string s = to_string(num);
    int index = 1;
    for(char c : s){
        if(c-'0' == k){
            flag = false;
            answer = index;
            break;
        }
        else{index++;}
    }
    if(flag) answer = -1;
    return answer;
}