#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int m, int c) {
    string answer = "";
    int start = 0;
    int end = m;
    while(start < my_string.size()){
        int cnt = 0;
        for(int i = start; i<end; i++){
            cnt++;
            if(cnt == c){
                answer += my_string[i];
            }
        }
        start += m;
        end += m;
    }
    
    return answer;
}