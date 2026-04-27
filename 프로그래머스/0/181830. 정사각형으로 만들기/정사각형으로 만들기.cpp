#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr) {
    vector<vector<int>> answer;
    int cert;
    if(arr.size() < arr[0].size()){ // 행 추가
        cert = arr[0].size();
        for(int i=arr.size(); i<cert; i++){
            vector<int> tmp(cert);
            arr.push_back(tmp);    
        }
    }
    else if(arr.size() > arr[0].size()){ // 열 추가
        cert = arr.size();
        for(int i=0; i<arr.size(); i++){
            for(int j=arr[i].size(); j<cert; j++){
                arr[i].push_back(0);
            }
        }
    }
    else{
        return arr;
    }   
    return arr;
}