#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    if(myString.size() < pat.size()){
        return 0;
    }
    
    for(int i=0; i<myString.size(); i++){
        if(myString[i] == 65){myString[i]++;}
        else{myString[i]--;}
    }
    
    if(myString == pat){
        return 1;
    }
    
    for(int i=0; i<=myString.size()-pat.size(); i++){
        if(myString.substr(i,pat.size()) == pat){
            return 1;
        }
    }
    return 0;
}