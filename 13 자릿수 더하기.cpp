#include <iostream>
#include <string>

using namespace std;
int solution(int n)
{
    int answer = 0;
    string num = to_string(n);
    
    for (int i = 0; i < num.size(); ++i) {
        answer = answer + num[i] - '0';
    }
    
    return answer;
}

// https://school.programmers.co.kr/learn/courses/30/lessons/12931
