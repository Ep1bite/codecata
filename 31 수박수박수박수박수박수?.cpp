#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int n) {
    char* answer = (char*)malloc(3 * n + 1);
    char* ptr = answer;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            memcpy(ptr, "수", 3);
        } else {
            memcpy(ptr, "박", 3);
        }
        ptr += 3;
    }

    *ptr = '\0'; 

    return answer;
}

// https://school.programmers.co.kr/learn/courses/30/lessons/12922
