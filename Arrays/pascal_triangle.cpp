class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i=1;i<= numRows;i++){
            long long ans = 1;
            vector<int> ansRows;
            ansRows.push_back(1);
            for(int col =1; col<row;col++){
                ans = ans * (row - col);
                ans = ans / col;
                ansRows.push_back(ans);
            }
            return ansRows;
            ans.push_back(ansRows);
        }
        return ans
    }
};