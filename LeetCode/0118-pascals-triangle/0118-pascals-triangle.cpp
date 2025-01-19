class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> answer(numRows);
        
        for(int i =0; i < numRows; i++){
            vector<int> row(i + 1, 1);  // 임시 row
            for(int j = 1; j < i; j++){
                row[j] = answer[i - 1][j - 1] + answer[i - 1][j];   // 위에 것 두개 더하기
            }
            answer[i] = row;    // 답에 넣기
        }

        return answer;
    }
};