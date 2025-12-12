#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    unordered_map<string, int> rank;

    for (int i = 0; i < players.size(); i++) {
        rank[players[i]] = i;
    }

    for (auto& name : callings) {
        int curIdx = rank[name];   
        int frontIdx = curIdx - 1; 

        string frontPlayer = players[frontIdx];

        players[frontIdx] = name;
        players[curIdx] = frontPlayer;

        rank[name] = frontIdx;
        rank[frontPlayer] = curIdx;
    }

    return players;
}

// https://school.programmers.co.kr/learn/courses/30/lessons/178871?language=cpp
