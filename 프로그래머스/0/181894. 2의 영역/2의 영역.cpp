#include <string>
#include <vector>
#include <queue>

using namespace std;

vector<int> solution(vector<int> arr) {
    
    vector<int> answer;
    queue<int> s;
    bool flag = false;
    int cnt = 0;
    for(int i : arr){
        if(flag && i == 2){
            while(!s.empty()){
                int tmp = s.front();
                //cout << tmp;
                answer.push_back(tmp);
                s.pop();
            }
            flag = false;
        }
        if(i == 2){
            flag = true;
        }
        if(flag) s.push(i);
    }
    while(!s.empty()){
        int tmp = s.front();
        answer.push_back(tmp);   
        if(tmp == 2) break;
        s.pop();
    }
    if(answer.size() == 0) answer.push_back(-1);
    return answer;
}