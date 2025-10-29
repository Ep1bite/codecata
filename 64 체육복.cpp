#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {

    sort(lost.begin(), lost.end());
    sort(reserve.begin(), reserve.end());
    
    vector<int> realLost;
    vector<int> realReserve;
    
    for (int l : lost) {
        if (find(reserve.begin(), reserve.end(), l) == reserve.end())
            realLost.push_back(l);
    }
    for (int r : reserve) {
        if (find(lost.begin(), lost.end(), r) == lost.end())
            realReserve.push_back(r);
    }
    
    for (int i = 0; i < realLost.size(); i++) {
        for (int j = 0; j < realReserve.size(); j++) {
            if (abs(realLost[i] - realReserve[j]) == 1) {
                realReserve.erase(realReserve.begin() + j);
                realLost.erase(realLost.begin() + i);
                i--; 
                break;
            }
        }
    }
    
    return n - realLost.size();
}

// https://school.programmers.co.kr/learn/courses/30/lessons/42862
