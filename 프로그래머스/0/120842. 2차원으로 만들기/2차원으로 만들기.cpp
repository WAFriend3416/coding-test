#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<int> num_list, int n) {
    vector<vector<int>> answer;
    vector<int> tmp;
    int cnt = 0;
    for(int i=0; i<num_list.size(); i++){
        if(cnt == n){
            cnt =0;
            answer.push_back(tmp);
            tmp.clear();
        }
        tmp.push_back(num_list[i]);
        cnt++;
    }
    answer.push_back(tmp);
    return answer;
}