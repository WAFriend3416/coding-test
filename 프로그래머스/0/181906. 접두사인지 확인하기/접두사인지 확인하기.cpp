#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_prefix) {
    string answer = "";
    if(my_string.size() < is_prefix.size()) return 0;
    for(int i=0; i<is_prefix.size(); i++){
        answer += my_string[i];
    }
    if(answer == is_prefix) return 1;
    else return 0;
}