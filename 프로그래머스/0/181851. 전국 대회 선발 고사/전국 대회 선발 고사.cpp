#include <string>
#include <vector>
#include <map>


using namespace std;

int solution(vector<int> rank, vector<bool> attendance) {
    int answer =0 ;
    map<int,pair<int,bool>> mp;
    int a[3] = {10000,100,1};
    int cnt = 0;
    for(int i=0; i<rank.size(); i++){
        mp[rank[i]] = make_pair(i,attendance[i]);
    }
    for(int i=1; i<=mp.size(); i++){
        if(mp[i].second){
            answer += a[cnt]*(mp[i].first);
            cnt++;
        }
        else{
            continue;
        }
        if(cnt == 3) break;
    }
    return answer;
}