#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;

    sort(score.begin(), score.end(), greater<int>());

    for (int i = m - 1; i < score.size(); i += m) {
        answer += score[i] * m;  
    }

    return answer;
}

// https://school.programmers.co.kr/learn/courses/30/lessons/135808
