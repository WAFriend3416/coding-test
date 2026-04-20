#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int k) {
    vector<int> answer;
    bool flag = true;
    if(k%2==0)flag=false;
    for(int i : arr){
        if(flag) answer.push_back(i*k);
        else answer.push_back(i+k);
    }
    return answer;
}