#include <string>
#include <vector>
#include <algorithm> 

using namespace std;

vector<int> solution(vector<int> arr) {
    if (arr.size() == 1) return {-1};

    int minVal = *min_element(arr.begin(), arr.end());

    vector<int> answer;
    for (int num : arr) {
        if (num != minVal) {
            answer.push_back(num);
        }
    }

    return answer;
}

// https://school.programmers.co.kr/learn/courses/30/lessons/12935
