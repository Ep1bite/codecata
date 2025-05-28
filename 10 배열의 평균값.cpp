#include <string>
#include <vector>

using namespace std;

double solution(vector<int> numbers) {
    double answer = 0;
    
    for(int i = 0; i < numbers.size(); i++) {
        answer = answer + numbers[i];
    }
    
    return answer / numbers.size();
}

// https://school.programmers.co.kr/learn/courses/30/lessons/120817#qna
