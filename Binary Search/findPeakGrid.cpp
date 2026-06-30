class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        int low = 0;
        int high = n -1;
        while(low <= high){
            int mid = (low+high)/2;
            int row = 0;
            for(int i=1;i<m;i++){
                if(mat[i][mid] > mat[row][mid]){
                    row = i;
                }
            }
            int left = (mid > 0) ? mat[row][mid-1] : -1;
            int right = (mid < n-1) ? mat[row][mid+1] : -1;
            if(left < mat[row][mid] && right < mat[row][mid]){
                return {row,mid};
            }
            else if(right > mat[row][mid]){
                low = mid + 1;
            }
            else {
                high = mid -1;
            }
        }
        return {-1,-1};
    }
};