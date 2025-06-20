#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;

    for (int x = 2; x < n; x++) {
        if (n % x == 1) {
            answer = x;
            break; 
        }
    }

    return answer;
}

https://school.programmers.co.kr/learn/courses/30/lessons/87389
