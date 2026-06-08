class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> a(matrix.size(),0);
        vector<int> b(matrix[0].size(),0);
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[0].size(); j++) {
                if (matrix[i][j] == 0) {
                    a[i] = -1;
                    b[j] = -1;
                }
            }
        }
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[0].size(); j++) {
                if (a[i] == -1 || b[j] == -1) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};