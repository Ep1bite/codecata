#include <string>
#include <vector>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

vector<int> solution(int n, int m) {
    vector<int> answer;
    int g = gcd(n, m);              
    int l = (n / g) * m;            
    answer.push_back(g);
    answer.push_back(l);
    return answer;
}

// https://school.programmers.co.kr/learn/courses/30/lessons/12940
