#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<string> strArr) {
    int a[31] = {0};
    for(string s : strArr){
        a[s.size()]++;
    }
    sort(a,a+31);
    return a[30];
}