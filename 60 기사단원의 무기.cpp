#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int get_divisor_count(int n) {
    int count = 0;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            count++;         
            if (i != n / i)     
                count++;
        }
    }
    return count;
}

int solution(int number, int limit, int power) {
    int answer = 0;
    
    for (int i = 1; i <= number; i++) {
        int cnt = get_divisor_count(i);
        if (cnt > limit) cnt = power;  
        answer += cnt;               
    }
    
    return answer;
}

// https://school.programmers.co.kr/learn/courses/30/lessons/136798
