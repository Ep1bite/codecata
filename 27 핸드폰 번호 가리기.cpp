#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    int len = phone_number.length();
    string answer = string(len - 4, '*') + phone_number.substr(len - 4);
    return answer;
}

// https://school.programmers.co.kr/learn/courses/30/lessons/12948
