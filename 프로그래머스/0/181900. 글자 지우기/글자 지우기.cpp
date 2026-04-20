#include <string>
#include <vector>

using namespace std;

string solution(string my_string, vector<int> indices) {
    string answer = "";
    for(int i : indices){
        my_string[i] =' ';
    }
    for(char c : my_string){
        if(c == ' ') continue;
        else answer += c;
    }
    return answer;
}