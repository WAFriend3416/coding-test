#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<vector<int>> score) {
    vector<int> answer;
    vector<pair<int,int>> vp;
    for(auto i : score){
        vp.push_back(make_pair(i[0]+i[1],1));    
    }
    for(int i=0; i<vp.size();i++){
        for(int j=0; j<vp.size(); j++){
            if(vp[i].first > vp[j].first) vp[j].second++;    
        }
    }
    for(auto i : vp) answer.push_back(i.second);
    return answer;
}