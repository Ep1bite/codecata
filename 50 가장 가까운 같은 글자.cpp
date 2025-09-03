#include <string>
#include <vector>
using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    vector<int> lastIndex(26, -1); 

    for (int i = 0; i < s.size(); i++) {
        int idx = s[i] - 'a';
        if (lastIndex[idx] == -1) {
            answer.push_back(-1);
        } else {
            answer.push_back(i - lastIndex[idx]);
        }
        lastIndex[idx] = i; 
    }

    return answer;
}

// https://school.programmers.co.kr/learn/courses/30/lessons/142086
