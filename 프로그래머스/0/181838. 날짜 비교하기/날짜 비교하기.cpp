#include <string>
#include <vector>

using namespace std;

int solution(vector<int> date1, vector<int> date2) {
    // 연도 비교
    if (date1[0] < date2[0]) return 1;
    if (date1[0] > date2[0]) return 0;
    
    // 연도가 같을 경우 월 비교
    if (date1[1] < date2[1]) return 1;
    if (date1[1] > date2[1]) return 0;
    
    // 연도, 월이 같을 경우 일 비교
    if (date1[2] < date2[2]) return 1;
    
    // 그 외의 경우 (date1이 더 늦거나 같음)
    return 0;
}