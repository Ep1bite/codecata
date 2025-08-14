#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    int numRows = arr1.size();          
    int numCols = arr1[0].size();        
    
    vector<vector<int>> answer(numRows, vector<int>(numCols)); 
    
    for (int i = 0; i < numRows; ++i) {
        for (int j = 0; j < numCols; ++j) {
            answer[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    
    return answer;
}

// https://school.programmers.co.kr/learn/courses/30/lessons/12950
