#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    string answer = "";
    for(char c : myString){
        if(c == 'a'){
            answer += (c-32);
        }
        else if(int(c) > 65 && int(c) <= 90){
            answer += (c+32);
        }
        else{
            answer += c;
        }
    }
    return answer;
}