#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> park, vector<string> routes) {
    int h = park.size();
    int w = park[0].size();

    int y = 0, x = 0;

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (park[i][j] == 'S') {
                y = i;
                x = j;
                break;
            }
        }
    }

    for (string route : routes) {
        char dir = route[0];
        int dist = route[2] - '0';

        int dy = 0, dx = 0;
        if (dir == 'N') dy = -1;
        else if (dir == 'S') dy = 1;
        else if (dir == 'W') dx = -1;
        else if (dir == 'E') dx = 1;

        int ny = y;
        int nx = x;
        bool canMove = true;

        for (int i = 0; i < dist; i++) {
            ny += dy;
            nx += dx;

            if (ny < 0 || ny >= h || nx < 0 || nx >= w) {
                canMove = false;
                break;
            }
          
            if (park[ny][nx] == 'X') {
                canMove = false;
                break;
            }
        }

        if (canMove) {
            y = ny;
            x = nx;
        }
    }

    return {y, x};
}

// https://school.programmers.co.kr/learn/courses/30/lessons/172928?language=cpp
