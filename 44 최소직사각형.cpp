#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<vector<int>> sizes) {
    int maxWidth = 0;
    int maxHeight = 0;

    for (auto &card : sizes) {
        int w = card[0];
        int h = card[1];
        
        if (w < h) swap(w, h); 
        maxWidth = max(maxWidth, w);
        maxHeight = max(maxHeight, h);
    }

    return maxWidth * maxHeight;
}

// https://school.programmers.co.kr/learn/courses/30/lessons/86491
