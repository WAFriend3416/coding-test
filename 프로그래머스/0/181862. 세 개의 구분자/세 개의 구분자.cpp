#include <string>
#include <vector>

using namespace std;

vector<string> solution(string myStr) {
    vector<string> answer;
    for(int i=0; i<myStr.length(); i++){
        if(myStr[i] == 'a' || myStr[i] == 'b' || myStr[i] == 'c'){
            myStr[i] = '!';
        }
    }
    int start = 0;
    auto end = myStr.find('!');
    while(end != string::npos){
        if(myStr.substr(start,end-start) != ""){
            answer.push_back(myStr.substr(start,end-start));
        }
        start = end + 1;
        end = myStr.find('!',start);    
    }
    answer.push_back(myStr.substr(start,end-start));
    if(answer[0] == "") answer[0] = "EMPTY";
    return answer;
}