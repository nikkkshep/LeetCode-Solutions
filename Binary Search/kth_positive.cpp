class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int low = 0;
        int high = arr.size()-1;
        int ans;
        int mid;
        while( low <= high){
             mid = low + (high - low)/2;
            if(arr[mid] - (mid +1) >= k){
                high = mid -1;
            } 
            else {
                low = mid +1;
            }
        }
        cout<< high;
        ans = k + high +1;
         return ans;
    }
};