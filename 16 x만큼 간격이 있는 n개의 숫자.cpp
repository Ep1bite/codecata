#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int X, int N) {
    vector<long long> answer;
    for (int i = 0; i < N; ++i) {
        answer.push_back(static_cast<long long>(X) * (i + 1));
    }
    return answer;
}

// https://school.programmers.co.kr/learn/courses/30/lessons/12954#
