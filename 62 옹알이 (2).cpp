#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(const char* babbling[], size_t babbling_len) {
    const char* words[] = {"aya", "ye", "woo", "ma"};
    int answer = 0;

    for (size_t i = 0; i < babbling_len; i++) {
        const char* str = babbling[i];
        size_t len = strlen(str);
        char prev[4] = "";  // 이전 발음을 저장할 변수
        bool valid = true;  // 유효한 단어인지 판별

        for (size_t j = 0; j < len;) {
            bool matched = false;
            for (int k = 0; k < 4; k++) {
                size_t wlen = strlen(words[k]);
                if (strncmp(str + j, words[k], wlen) == 0) {
                    // 같은 발음이 연속된 경우는 불가능
                    if (strcmp(prev, words[k]) == 0) {
                        valid = false;
                        break;
                    }
                    strcpy(prev, words[k]); // 이전 발음 업데이트
                    j += wlen;              // 인덱스 이동
                    matched = true;
                    break;
                }
            }
            if (!matched) { // 어떤 발음과도 일치하지 않으면 불가능한 단어
                valid = false;
                break;
            }
            if (!valid) break;
        }

        if (valid) answer++;
    }

    return answer;
}

// https://school.programmers.co.kr/learn/courses/30/lessons/133499
