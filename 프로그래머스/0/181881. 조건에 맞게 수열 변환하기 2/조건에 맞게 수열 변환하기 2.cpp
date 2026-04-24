#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr) {
    int answer = 0;
    vector<int> pre;
    for(int i : arr) pre.push_back(i);
    while(1){
        for(int i=0; i<arr.size(); i++){
            if(arr[i] >= 50 && arr[i]%2 == 0) arr[i] /= 2;
            else if(arr[i] < 50 && arr[i]%2 != 0) arr[i] = arr[i]*2 + 1;
        }
        bool flag = true;
        for(int i=0; i<arr.size(); i++){
            if(pre[i] != arr[i]) flag = false;
        }
        
        for(int i=0; i<arr.size(); i++){
            pre[i] = arr[i];
        }
        if(flag) return answer;
        else answer++;
    }
    return answer;
}