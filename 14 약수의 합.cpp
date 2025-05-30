#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    for (int i = 1; i <= n; i++) { // 약수는 자기 자신도 포함된다 등호 어디다 빼먹었더라...ㅠㅠ
        if (n % i == 0) {
            answer = answer + i;
        }
    }
    
    return answer;
}

// https://school.programmers.co.kr/learn/courses/30/lessons/12928

// + 이거 절반만 비교해도 될 것 같은데..?
