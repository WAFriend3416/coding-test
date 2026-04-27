#include <string>
#include <vector>

using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    int a = max(sides[0],sides[1]); // 제시된 것 중 제일 큰 변
    int b = min(sides[0],sides[1]); // 제시된 것 중 제일 작은 변
    int c = 1;
    while(a+b > c){
        if(a >= c){ // a가 제일 긴 변 일때
            if(b+c > a) {
                answer++;
            }
        }
        else if(a < c){// c가 제일 긴 변 일때
             if(b+a > c) {
                answer++;
            }  
        }
        c++;
    }
    return answer;
}