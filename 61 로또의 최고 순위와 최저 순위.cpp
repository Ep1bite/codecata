#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int get_rank(int match_count) {
    switch (match_count) {
        case 6: return 1;
        case 5: return 2;
        case 4: return 3;
        case 3: return 4;
        case 2: return 5;
        default: return 6;
    }
}

int* solution(int lottos[], size_t lottos_len, int win_nums[], size_t win_nums_len) {
    int* answer = (int*)malloc(sizeof(int) * 2);
    int zero_count = 0;      
    int match_count = 0;     

    for (int i = 0; i < lottos_len; i++) {
        if (lottos[i] == 0) {
            zero_count++;
            continue;
        }
        for (int j = 0; j < win_nums_len; j++) {
            if (lottos[i] == win_nums[j]) {
                match_count++;
                break;
            }
        }
    }

    int best_match = match_count + zero_count;
    int worst_match = match_count;

    answer[0] = get_rank(best_match);
    answer[1] = get_rank(worst_match);

    return answer;
}
