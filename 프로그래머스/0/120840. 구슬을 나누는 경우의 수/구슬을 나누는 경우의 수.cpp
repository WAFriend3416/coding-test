#include <string>
#include <vector>

using namespace std;

int pacal(int n, int r){
    if(r == 1) return n;
    if(n == r) return 1;
    int answer = 0;
    answer = pacal(n-1,r-1) + pacal(n-1,r);
    return answer;
}

int solution(int balls, int share) {    
    return pacal(balls,share);
}