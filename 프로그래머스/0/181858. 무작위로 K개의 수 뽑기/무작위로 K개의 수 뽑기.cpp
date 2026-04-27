#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int k) {
    int a[100005] = {0};
    vector<int> answer;
    for(int i : arr){
        if(a[i] == 0){
            a[i]++;
            answer.push_back(i);
        }
        if(answer.size() == k) break;
    }
    if(answer.size() < k){
        for(int i=answer.size(); i<k; i++){
            answer.push_back(-1);
        }
    }
    return answer;
}