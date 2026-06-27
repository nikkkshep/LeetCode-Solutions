class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high =INT_MIN;
        for(int j=0;j<piles.size();j++){
            high = max(high,piles[j]);
        }
        
        int mid;
        while( low <= high){
            long long ans = 0;
             mid = low + (high - low)/2;

            for(int i=0;i<piles.size();i++){
               ans += ceil((double)piles[i]/mid);
            }
            if( ans <= h){
                high = mid-1;
            }
            else{low = mid+1;};
        }
        return low;
    }
};