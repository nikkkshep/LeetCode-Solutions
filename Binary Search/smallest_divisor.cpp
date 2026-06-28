class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        int high = *max_element(nums.begin(),nums.end());

        while ( low <= high){
            int mid = low + ( high - low)/2;
            int ans = 0;
            for(int a : nums){
               ans += ( a + mid -1)/mid;
            }
            if( ans <= threshold){
                high = mid -1;
            }
            else {
                low = mid + 1;
            }
        }
        return low;
    }
};