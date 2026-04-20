#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int c) {
    int answer = 0;
    int num1 = a+b+c;
    int num2 = (a*a) + (b*b) + (c*c);
    int num3 = (a*a*a) + (b*b*b) + (c*c*c);
    if(a == b && b == c){
        answer += num1 * num2 * num3;
    }
    else if(a == b || b == c || a == c){
        answer += num1 * num2;
    }
    else{
        answer += num1;
    }
    return answer;
}