#include <string>
#include <vector>

using namespace std;

vector<int> solution(string myString) {
    vector<int> answer;
    auto start = 0;
    auto end = myString.find('x');
    while(end != string::npos){
        string tmp = myString.substr(start,end-start);
        answer.push_back(tmp.size());
        start = end + 1;
        end = myString.find('x',start);
    }
    string tmp = myString.substr(start,end-start);
    answer.push_back(tmp.size());
    return answer;
}