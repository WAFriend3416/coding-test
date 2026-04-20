#include <string>
#include <vector>

using namespace std;

int solution(int a, int d, vector<bool> included) {
    int answer = 0;
    int tmp = a;
    if(included[0]) answer += a;
    for(int i=1; i<included.size(); i++){
        tmp += d;
        if(included[i]){
            answer += tmp;
        }
    }
    return answer;
}