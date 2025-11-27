#include <string>
#include <vector>
#include <map>
using namespace std;

string solution(vector<string> survey, vector<int> choices) {
    string answer = "";
    
    map<char, int> score;
    score['R'] = score['T'] = 0;
    score['C'] = score['F'] = 0;
    score['J'] = score['M'] = 0;
    score['A'] = score['N'] = 0;

    vector<int> points = {0, 3, 2, 1, 0, 1, 2, 3};
    
    for (int i = 0; i < survey.size(); i++) {
        char disagree = survey[i][0];
        char agree = survey[i][1];   
        
        int choice = choices[i];
        if (choice < 4) {
            score[disagree] += points[choice];
        }
        else if (choice > 4) {
            score[agree] += points[choice];
        }
    }

    answer += (score['R'] >= score['T'] ? 'R' : 'T');
    answer += (score['C'] >= score['F'] ? 'C' : 'F');
    answer += (score['J'] >= score['M'] ? 'J' : 'M');
    answer += (score['A'] >= score['N'] ? 'A' : 'N');

    return answer;
}

// https://school.programmers.co.kr/learn/courses/30/lessons/118666
