#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    map<char, int> minPress;
    
    for (auto& key : keymap) {
        for (int i = 0; i < key.size(); i++) {
            char c = key[i];
            int pressCount = i + 1;
            if (minPress.find(c) == minPress.end()) {
                minPress[c] = pressCount;
            } else {
                minPress[c] = min(minPress[c], pressCount);
            }
        }
    }

    vector<int> answer;

    for (auto& target : targets) {
        int total = 0;
        bool possible = true;
        for (char c : target) {
            if (minPress.find(c) != minPress.end()) {
                total += minPress[c];
            } else {
                possible = false;
                break;
            }
        }
        answer.push_back(possible ? total : -1);
    }

    return answer;
}

// https://school.programmers.co.kr/learn/courses/30/lessons/160586
