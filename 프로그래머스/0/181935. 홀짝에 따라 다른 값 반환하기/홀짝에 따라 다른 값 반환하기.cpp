#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    bool flag = false;
    if(n%2 == 0){
        flag = true;
    }
    for(int i=1; i<=n; i++){
        if(flag && i%2 ==0){
            answer += (i*i);
        }
        else if(!(flag) && i%2 != 0){
            answer += i;
        }
    }
    return answer;
}