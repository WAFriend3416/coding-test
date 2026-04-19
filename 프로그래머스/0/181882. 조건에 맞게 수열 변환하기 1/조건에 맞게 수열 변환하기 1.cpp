#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    for(int i : arr){ // 50 보다 크거나 같은 짝수면 / 2 , 50 보다 작은 홀수면 * 2
        if(i >= 50 && i%2 ==0){
            answer.push_back(i/2);
        }
        else if(i < 50 && i%2 ==1){
            answer.push_back(i*2);
        }
        else{
            answer.push_back(i);
        }
    }
    return answer;
}