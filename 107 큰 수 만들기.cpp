#include <string>
#include <vector>
using namespace std;

string solution(string number, int k) {
    string answer = "";
    
    for (char num : number) {
        while (!answer.empty() && answer.back() < num && k > 0) {
            answer.pop_back();
            k--;
        }
        answer.push_back(num);
    }
    
    while (k > 0) {
        answer.pop_back();
        k--;
    }
    
    return answer;
}

// https://school.programmers.co.kr/learn/courses/30/lessons/42883
