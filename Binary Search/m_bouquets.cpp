class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int low = *min_element(bloomDay.begin(), bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end());
        int mid;

        if (bloomDay.size() < (long long)m * k) {
            return -1;
        }
        while (low <= high) {
            int cnt = 0;
            int ans = 0;
            mid = low + (high - low) / 2;

            for (int i = 0; i < bloomDay.size(); i++) {
                if (bloomDay[i] <= mid) {
                    cnt++;
                } else {
                    ans += cnt / k;
                     cnt = 0;
                }
               
            }
             ans += cnt / k;

            if (ans >= m) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};