#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> delete_list) {
    vector<int> answer;
    for(int i : delete_list){
        for(int j=0; j<arr.size(); j++){
            if(arr[j] == i){
                arr.erase(arr.begin()+j);
                break;
            }
            
        }
    }
    answer = arr;
    return answer;
}