#include <string>
#include <vector>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer;
    int N = 52;
    while(N--) answer.push_back(0);
    for(char c : my_string){
        int n = int(c);
        if(c >= 65 && c <= 90) answer[c-65]++;
        else answer[c-71]++;
    }
    return answer;
}