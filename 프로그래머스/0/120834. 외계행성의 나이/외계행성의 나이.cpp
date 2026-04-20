#include <string>
#include <vector>

using namespace std;

string solution(int age) {
    string answer = "";
    string s_age = to_string(age);
    for(char c : s_age){
        answer += 'a' + (c-'0');
    }
    return answer;
}