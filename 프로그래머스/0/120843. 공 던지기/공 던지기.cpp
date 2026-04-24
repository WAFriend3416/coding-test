#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int k) {
    int answer = 0;
    while(k != 1){
        answer = (answer+2)%numbers.size();
        k--;
    }
    return answer+1;
}