#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";
    do{
        int tmp;
        char c;    
        tmp = n % 10;
        c = tmp + 48;
        n = n / 10;
        answer = c + answer;
    }
    while(n > 0);
    return answer;
}