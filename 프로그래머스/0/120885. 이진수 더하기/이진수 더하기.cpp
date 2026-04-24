#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string bin1, string bin2) {
    string answer = "";
int dec1 = stoi(bin1, nullptr, 2); 
    int dec2 = stoi(bin2, nullptr, 2);
    int ret = dec1+dec2;
    while(ret > 0 ){
      answer += to_string(ret % 2);
        ret /= 2;
    }
    reverse(answer.begin(), answer.end());
    if(answer.length() == 0) return "0";
    return answer;
}