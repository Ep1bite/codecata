#include <string>
#include <vector>

using namespace std;

int solution(int angle) {
    int answer = 0;
    
    if (angle < 90 ) {
        return 1;
    } else if (angle == 90) {
        return 2;
    } else if (angle > 90 && angle < 180) {
        return 3;
    } else if (angle == 180){
        return 4;
    }
}

// https://school.programmers.co.kr/learn/courses/30/lessons/120829
