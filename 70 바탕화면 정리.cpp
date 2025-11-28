#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<string> wallpaper) {
    int n = wallpaper.size();
    int m = wallpaper[0].size();

    int lux = 1e9, luy = 1e9;
    int rdx = -1, rdy = -1;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(wallpaper[i][j] == '#'){
                lux = min(lux, i);
                luy = min(luy, j);
                rdx = max(rdx, i);
                rdy = max(rdy, j);
            }
        }
    }

    return {lux, luy, rdx + 1, rdy + 1};
}

//https://school.programmers.co.kr/learn/courses/30/lessons/161990
