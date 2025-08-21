#include <string>
#include <cctype>
using namespace std;

string solution(string s) {
    string answer = "";
    int idx = 0; 
    
    for (char ch : s) {
        if (ch == ' ') {
            answer += ' ';
            idx = 0; 
        } else {
            if (idx % 2 == 0) {
                answer += toupper(ch); 
            } else {
                answer += tolower(ch); 
            }
            idx++;
        }
    }
    
    return answer;
}


// https://school.programmers.co.kr/learn/courses/30/lessons/12930
