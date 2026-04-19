#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    // 첫 번째 원소가 1번 원소 , num_list[0] : 1번 원소
    int sum_odd; // 홀수번째 원소들 합
    int sum_even; // 짝수번재 원소들 합
    for(int i=0; i<num_list.size(); i++){
        if(i%2 == 0){
            sum_odd += num_list[i];
        }
        else{
            sum_even += num_list[i];
        }
    }    
    if(sum_odd >= sum_even){
        return sum_odd; 
    }
    else{
        return sum_even;
    }
}