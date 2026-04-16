#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> array) {
    vector<int> answer;
    pair<int,int> p; // value , index
    p.first = array[0];
    p.second = 0;
    for(int i=1; i<array.size(); i++){
        if(array[i] > p.first){
            p.first = array[i];
            p.second = i;
        }
    }
    answer.push_back(p.first);
    answer.push_back(p.second);
    return answer;
}