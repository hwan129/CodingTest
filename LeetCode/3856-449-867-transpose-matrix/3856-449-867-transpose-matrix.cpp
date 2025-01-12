class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int x = matrix.size();
        int y = matrix[0].size();

        vector<vector<int>> result(y, vector<int>(x)); // vector 이중 배열

        for(int i = 0; i < x; i++)
            for(int j = 0; j < y; j++)
                result[j][i] = matrix[i][j];

        return result;
    }
};