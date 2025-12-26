#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <sstream>

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    int n = id_list.size();
    vector<int> answer(n, 0);

    // id -> index 매핑
    unordered_map<string, int> idIndex;
    for (int i = 0; i < n; i++) {
        idIndex[id_list[i]] = i;
    }

    // 중복 신고 제거
    unordered_set<string> uniqueReport(report.begin(), report.end());

    // 신고당한 사람 -> 신고한 사람들
    unordered_map<string, unordered_set<string>> reportedBy;

    for (const string& r : uniqueReport) {
        string reporter, reported;
        stringstream ss(r);
        ss >> reporter >> reported;
        reportedBy[reported].insert(reporter);
    }

    // 정지된 유저 판별 후 메일 카운트
    for (const auto& entry : reportedBy) {
        if (entry.second.size() >= k) {
            // entry.first 가 정지된 유저
            for (const string& reporter : entry.second) {
                answer[idIndex[reporter]]++;
            }
        }
    }

    return answer;
}

// https://school.programmers.co.kr/learn/courses/30/lessons/92334?language=cpp
