#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    int second = 2 * a * b;
    string tmp = to_string(a) + to_string(b);
    if(stoi(tmp) > second) return stoi(tmp);
    else return second;
}