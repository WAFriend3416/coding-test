#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    int odd = 0;
    for(int i : num_list){
        if(i % 2 == 0) odd++;
    }
    answer.push_back(odd);
    answer.push_back(int(num_list.size()) - odd);
    return answer;
}