#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int total = 45;  // 0부터 9까지의 합
    int sum = 0;
    
    for (int num : numbers) {
        sum += num;
    }
    
    return total - sum;
}

// https://school.programmers.co.kr/learn/courses/30/lessons/86051
