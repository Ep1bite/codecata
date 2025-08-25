#include <string>
using namespace std;

int solution(string t, string p) {
    int answer = 0;
    int t_len = t.size();
    int p_len = p.size();

    for (int i = 0; i <= t_len - p_len; i++) {
        string sub = t.substr(i, p_len);
        if (sub <= p) { 
            answer++;
        }
    }

    return answer;
}

// https://school.programmers.co.kr/learn/courses/30/lessons/147355
