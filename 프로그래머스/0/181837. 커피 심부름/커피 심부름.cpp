#include <string>
#include <vector>

using namespace std;

int solution(vector<string> order) {
    int answer = 0;
    for(string s : order){
        if(s == "americanoice" || s == "americano" || s == "iceamericano" || s == "hotamericano" || s == "americanohot" || s=="anything") answer += 4500;
        else answer += 5000;
    }
    return answer;
}