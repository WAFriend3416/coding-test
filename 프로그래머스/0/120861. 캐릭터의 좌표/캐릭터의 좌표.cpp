#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board) {
    vector<int> answer;
    int x = 0;
    int y = 0;
    for(string s : keyinput){
        if(s == "up"){
            if(y == board[1]/2) continue;
            else y++;
        }
        else if(s == "down"){
            if(y == -board[1]/2) continue;
            else y--;
        }
        else if(s == "left"){
            if(x == -board[0]/2) continue;
            else x--;
        }
        else if(s == "right"){
            if(x == board[0]/2) continue;
            else x++;       
        }
    }
    answer.push_back(x);
    answer.push_back(y);
    return answer;
}