#include <string>
#include <vector>

using namespace std;

double solution(vector<int> numbers) {
    double answer = 0;
    int tmp = 0;
    for(int i : numbers) tmp += i;
    answer = (double)tmp / (double)numbers.size();
    return answer;
}