#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int sum_ = 0;
    int mul_ = 1;
    for(int i : num_list){
        sum_ += i;
        mul_ *= i;
    }
    if(sum_*sum_ < mul_)return 0;
    else return 1;
}