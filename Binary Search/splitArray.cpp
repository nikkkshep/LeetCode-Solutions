class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(),nums.end());
        int high=0;
        for( int a : nums){
            high += a;
        }

        while( low <= high ){
            int sum=0;
            int cnt=1;
            int mid = (low+high)/2;
            for(int i=0;i<nums.size();i++){
                if(sum + nums[i] <= mid){
                    sum += nums[i];
                }
                else{
                    cnt++;
                    sum = nums[i];
                }
            }
            if( cnt <= k){
                high = mid - 1;
            }
            else{
                low = mid + 1; 
            }
        }
        return low;
    }
};