#include <string>
#include <vector>

using namespace std;

long long solution(string numbers) {
    long long answer = 0;
    string as = "";
    string tmp;
    for(int i=0; i<numbers.length(); i++){
        tmp += numbers[i];
        if(tmp == "one"){
            as += "1";
            tmp = "";
        }
        else if(tmp == "two"){
            as += "2";
            tmp = "";
        }
        else if(tmp == "three"){
            as += "3";
            tmp = "";
        }
        else if(tmp == "four"){
            as += "4";
            tmp = "";
        }
        else if(tmp == "five"){
            as += "5";
            tmp = "";
        }
        else if(tmp == "six"){
            as += "6";
            tmp = "";
        }
        else if(tmp == "seven"){
            as += "7";
            tmp = "";
        }
        else if(tmp == "eight"){
            as += "8";
            tmp = "";
        }
        else if(tmp == "nine"){
            as += "9";
            tmp = "";
        }
        else if(tmp == "zero"){
            as += "0";
            tmp = "";
        }
    }
    answer = stoll(as);
    return answer;
}
