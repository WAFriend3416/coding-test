#include <string>
#include <vector>

using namespace std;
int a[1000];

string solution(string my_string) {
    string answer = "";
    for(char c : my_string){
        a[c]++; 
        if(a[c] >= 2) answer += "";
        else answer += c;
    }
    
    return answer;
}