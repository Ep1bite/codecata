#include <string>
#include <vector>
#include <algorithm> 
#include <functional>

using namespace std;

long long solution(long long n) {
    string StrN = to_string(n);

    sort(StrN.begin(), StrN.end(), greater<char>());

    long long Answer = std::stoll(StrN);

    return Answer;
}

// https://school.programmers.co.kr/learn/courses/30/lessons/12933
