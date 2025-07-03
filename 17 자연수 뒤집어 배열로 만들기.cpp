#include <string>
#include <vector>

std::vector<int> solution(long long n) {
    std::vector<int> answer; 

    if (n == 0) {
        answer.push_back(0);
        return answer;
    }

    while (n > 0) {
        answer.push_back(n % 10);
        n /= 10;
    }

    return answer;
}

// https://school.programmers.co.kr/learn/courses/30/lessons/12932?language=cpp
