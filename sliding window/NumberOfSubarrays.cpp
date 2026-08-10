class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        return previous(nums,k) - previous(nums,k-1);}
        
        int previous(vector<int>& nums,int k){
            int l =0,cnt=0,no=0;
            int n = nums.size();
            for(int r=0;r<n;r++){
                if(nums[r]%2 == 1){
                    cnt++;
                }
                while(cnt > k){
                    if(nums[l]%2 == 1){
                        cnt--;
                    }
                    l++;
                }
                no += (r-l+1);
            }
            return no;
        }
    
};