#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list, int n) {
    vector<int> answer;
    for(int i=1; i<=n; i++){
        answer.push_back(num_list[i-1]);
    }
    return answer;
}