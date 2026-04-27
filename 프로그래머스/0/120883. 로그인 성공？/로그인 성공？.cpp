#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> id_pw, vector<vector<string>> db) {
    string answer = "";
    unordered_map<string,string> um;
    for(auto v : db){
        um[v[0]] = v[1];
    }
    if(um.find(id_pw[0]) == um.end()) return "fail";
    else{
        if(um[id_pw[0]] == id_pw[1]) return "login";
        else return "wrong pw";
    }
}