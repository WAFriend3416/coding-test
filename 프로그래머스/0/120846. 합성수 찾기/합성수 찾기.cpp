#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    for(int i=4; i<=n; i++){
        int j=1;
        int cnt=0;
        while(j <= i){
            if(i%j==0) cnt++;
            j++;
        }
        if(cnt >= 3) answer++;
    }
    return answer;
}