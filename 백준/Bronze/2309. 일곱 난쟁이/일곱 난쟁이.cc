#include <bits/stdc++.h>
using namespace std;
const int N = 9;
bool flag = false;
vector<int> v;
int num1,num2,sum=0;
int main(){
    for(int i=0; i<N; i++){
        int n;
        cin >> n;
        v.push_back(n);
        sum += n;
    }
    sort(v.begin(),v.end());
    // 9개 중에서 2개를 뽑아서 합에서  뺐을때, 100이 되면 정지
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(i == j) continue;
            if(sum - v[i] - v[j] == 100){
                flag = true;
                num1 = i;
                num2 = j;
                break;
            }
        }
        if(flag) break;
    }
    for(int k=0; k<N; k++){
        if(k == num1 || k ==num2) continue;
        cout << v[k] << "\n";
    }
    return 0;
}