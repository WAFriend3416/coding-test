#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    vector<string> vs;
    int answer = 0;
    int start = 0;
    auto end = s.find(' ');
    while(end != string::npos){
        vs.push_back(s.substr(start,end-start));
        start = end + 1;
        end = s.find(' ',start);
    }
    vs.push_back(s.substr(start,end-start));
    string ps = vs[0];
    answer += stoi(ps);
    for(int i=1; i<vs.size(); i++){
        if(vs[i] == "Z"){
            answer -= stoi(ps);
        }
        else{
            answer += stoi(vs[i]);
            ps = vs[i];
        }
    }
    return answer;
}