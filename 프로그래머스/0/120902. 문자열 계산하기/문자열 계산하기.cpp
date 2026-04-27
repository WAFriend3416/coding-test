#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    vector<string> v;
    int start =0;
    auto end = my_string.find(" ");
    while(end != string::npos){
        v.push_back(my_string.substr(start,end-start));
        start = end + 1;
        end = my_string.find(" ",start);
    }
    v.push_back(my_string.substr(start,end-start));
    
    answer = stoi(v[0]);
    string op;
    int tmp;
    for(int i=1; i<v.size(); i++){
        if(op == "" && (v[i] == "+" || v[i] == "-")){
            op = v[i];
            continue;
        }
        if(op != ""){
            if(op == "-"){
                answer -= stoi(v[i]);
                
            }
            else{
                answer += stoi(v[i]);
            }
            op = "";
        }
    }
    return answer;
}