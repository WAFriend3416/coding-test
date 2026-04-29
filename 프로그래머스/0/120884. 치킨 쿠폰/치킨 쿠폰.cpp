#include <string>
#include <vector>

using namespace std;

int solution(int chicken) {
    if(chicken < 10) return 0;
    int answer = 0;
    int coupon = 0;
    coupon = chicken/10 + chicken%10;
    answer += chicken/10;
    while(coupon > 9){
        answer += (coupon/10);
        coupon = coupon/10 + coupon%10;
    }    
    return answer;
}