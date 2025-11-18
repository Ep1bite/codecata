#include <string>
#include <vector>

using namespace std;

string solution(string s, string skip, int index) {
    string answer = "";
    
    vector<bool> isSkip(26, false);
    for(char c : skip) {
        isSkip[c - 'a'] = true;
    }
    
    for(char c : s) {
        int cnt = 0;
        char now = c;
        
        while(cnt < index) {
            now++;
            if(now > 'z') now = 'a'; 
            
            if(!isSkip[now - 'a']) { 
                cnt++;
            }
        }
        
        answer += now;
    }
    
    return answer;
}

// https://school.programmers.co.kr/learn/courses/30/lessons/155652?language=cpp
