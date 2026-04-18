#include <string>
#include <vector>

using namespace std;

int solution(string binomial) {
    int answer = 0;
    bool flag = true;
    char o;
    string a1,b1;
    for(char c : binomial){
        if(int(c) >= 48 && int(c) <= 57){
            if(flag){
                a1 += c;
            }
            else{
                b1 += c;
            }
        }
        else if(c == ' ')continue;
        else if(c == '+' || c == '*' || c == '-'){
            flag = false;
            o = c;
        }
    }
    if(o == '+'){
        return stoi(a1) + stoi(b1);
    }
    else if(o == '*'){
        return stoi(a1) * stoi(b1);
    }
    else{
        return stoi(a1) - stoi(b1);
    }
    return answer;
}