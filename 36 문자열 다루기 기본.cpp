#include <string>
using namespace std;

bool solution(string s) {
    if (s.length() != 4 && s.length() != 6) {
        return false;
    }

    for (char c : s) {
        if (!isdigit(c)) {
            return false;
        }
    }

    return true;
}

// https://school.programmers.co.kr/learn/courses/30/lessons/12918
