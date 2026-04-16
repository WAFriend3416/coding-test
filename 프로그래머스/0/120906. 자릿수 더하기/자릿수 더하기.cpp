#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int tmp = 10;
    while(true){
        answer += n%10;
        n /= 10;
        if(n < 10) break;
    }
    answer += n%10;
    return answer;
}