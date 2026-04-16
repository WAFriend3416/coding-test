#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    for(char c : my_string){
        if(c >= 65 && c<= 90){
            c += 32;
        }
        else{
            c -= 32;
        }
        answer += c;
    }
    return answer;
}