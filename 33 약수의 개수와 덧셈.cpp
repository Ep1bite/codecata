#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>  

int solution(int left, int right) {
    int answer = 0;
    
    for (int i = left; i <= right; i++) {
        int root = (int)sqrt(i);
        if (root * root == i) {
            answer -= i;
        } else {
            answer += i;
        }
    }
    
    return answer;
}

// https://school.programmers.co.kr/learn/courses/30/lessons/77884
