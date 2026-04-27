#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    for(auto v : queries){
        bool flag = true;
        int min = 1000000;
        for(int i = v[0]; i<=v[1]; i++){
            if(arr[i] > v[2]){
                if(min > arr[i]) min = arr[i];
                flag = false;
            }
        }        
        if(flag) answer.push_back(-1);
        else answer.push_back(min);
    }
    return answer;
}