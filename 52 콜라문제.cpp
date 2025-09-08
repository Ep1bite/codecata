#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    int totalReceivedCola = 0;
    int currentEmptyBottles = n; 

    while (currentEmptyBottles >= a) { 
        int receivedCola = (currentEmptyBottles / a) * b;

        totalReceivedCola += receivedCola;

        currentEmptyBottles = (currentEmptyBottles % a) + receivedCola;
    }

    return totalReceivedCola;
}

// https://school.programmers.co.kr/learn/courses/30/lessons/132267
