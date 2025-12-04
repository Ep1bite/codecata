#include <string>
#include <vector>
#include <sstream>
#include <unordered_map>
using namespace std;

int toDays(string date) {
    int y, m, d;
    char dot;
    stringstream ss(date);
    ss >> y >> dot >> m >> dot >> d;
    return y * 12 * 28 + m * 28 + d;
}

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    vector<int> answer;
    unordered_map<char, int> termMap;

    for (auto &t : terms) {
        stringstream ss(t);
        char type;
        int month;
        ss >> type >> month;
        termMap[type] = month;
    }

    int todayDays = toDays(today);

    for (int i = 0; i < privacies.size(); i++) {
        string date, typeStr;
        stringstream ss(privacies[i]);
        ss >> date >> typeStr;

        char type = typeStr[0];
        int collectedDays = toDays(date);
        int expireDays = collectedDays + termMap[type] * 28 - 1;

        if (expireDays < todayDays) {
            answer.push_back(i + 1);
        }
    }

    return answer;
}

// https://school.programmers.co.kr/learn/courses/30/lessons/150370
