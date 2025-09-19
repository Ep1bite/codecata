#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> p1 = {1, 2, 3, 4, 5};
    vector<int> p2 = {2, 1, 2, 3, 2, 4, 2, 5};
    vector<int> p3 = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    
    vector<int> score(3, 0);
    for (int i = 0; i < answers.size(); i++) {
        if (answers[i] == p1[i % p1.size()]) score[0]++;
        if (answers[i] == p2[i % p2.size()]) score[1]++;
        if (answers[i] == p3[i % p3.size()]) score[2]++;
    }
    
    int maxScore = max({score[0], score[1], score[2]});
    
    vector<int> result;
    for (int i = 0; i < 3; i++) {
        if (score[i] == maxScore) result.push_back(i + 1);
    }
    
    return result;
}

// https://school.programmers.co.kr/learn/courses/30/lessons/42840
