#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(string myString) {
    vector<string> answer;
    auto start = 0;
    auto end = myString.find('x');
    while(end != string::npos){
        string tmp = myString.substr(start,end-start);
        if(tmp != "") answer.push_back(tmp);
        //answer.push_back(tmp);
        start = end+1;
        end = myString.find('x',start);
    }
    string tmp2 = myString.substr(start);
    if(tmp2 != "") answer.push_back(tmp2);
    sort(answer.begin(),answer.end());
    return answer;
}