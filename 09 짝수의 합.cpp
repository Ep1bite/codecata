#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int tmp = n / 2;
    
    answer = (tmp + 1) * tmp;
    
    return answer;
}

// https://school.programmers.co.kr/learn/courses/30/lessons/120831
