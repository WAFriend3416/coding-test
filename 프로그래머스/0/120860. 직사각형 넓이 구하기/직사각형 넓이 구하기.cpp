#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> dots) {
    int answer = 0;
    int x = dots[0][0];
    int y = dots[0][1];
    int a,b;
    for(int i=1; i<dots.size(); i++){
        if(x == dots[i][0]){
            a = abs(y - dots[i][1]);
        }
        if(y == dots[i][1]){
            b = abs(x - dots[i][0]);
        }
    }
    return a*b;
}