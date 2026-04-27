#include <string>
#include <vector>

using namespace std;

int solution(int M, int N) {
    if(M*N == 1) return 0;
    return M*N-1;
}