#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) {
    string answer = "";
    if(my_string.size() == n) return my_string;
    for(int i=my_string.size()-1; i>my_string.size()-1-n; i--){
        answer = my_string[i] + answer;
    }
    return answer;
}