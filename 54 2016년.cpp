#include <string>
#include <vector>
using namespace std;

string solution(int a, int b) {
    
    vector<string> days = {"SUN","MON","TUE","WED","THU","FRI","SAT"};
    
    
    int monthDays[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
    
    
    int totalDays = 0;
    for (int i = 0; i < a-1; i++) {
        totalDays += monthDays[i];
    }
    totalDays += (b-1); 
    
    int dayIndex = (5 + totalDays) % 7;
    
    return days[dayIndex];
}

// https://school.programmers.co.kr/learn/courses/30/lessons/12901
