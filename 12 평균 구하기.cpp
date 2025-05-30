#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    
    int i = 0;
    
    for (;i < arr.size(); i++) { // 함수에 괄호는 왜 빼먹었더라...
        answer = answer + arr[i];
    }
    
    return answer / i; // 평균 구하라니까 합 구하고 앉아있네...ㅋㅋ큐ㅠㅠ
}

https://school.programmers.co.kr/learn/courses/30/lessons/12944
