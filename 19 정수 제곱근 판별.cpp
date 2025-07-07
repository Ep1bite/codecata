#include <string>
#include <vector>
#include <cmath> 

long long solution(long long n) { 

    long long Root = static_cast<long long>(sqrt(n)); 
    
    if (Root * Root == n) {
        return (Root + 1) * (Root + 1);
    } else {
        return -1;
    }
}

// https://school.programmers.co.kr/learn/courses/30/lessons/12934
