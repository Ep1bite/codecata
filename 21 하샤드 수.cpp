#include <string> 
#include <numeric> 

bool solution(int x) {
    int sumOfDigits = 0;
    int originalX = x;

    while (x > 0) {
        sumOfDigits += x % 10;
        x /= 10;
    }

    if (originalX % sumOfDigits == 0) {
        return true; 
        
    } 
    else {
        return false; 
    }
}

// https://school.programmers.co.kr/learn/courses/30/lessons/12947
