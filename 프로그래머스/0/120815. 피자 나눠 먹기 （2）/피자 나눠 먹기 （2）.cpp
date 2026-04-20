#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 6;
    while(1){
        if(answer%n == 0){
            return answer/6;
        }
        answer += 6;
    }
}