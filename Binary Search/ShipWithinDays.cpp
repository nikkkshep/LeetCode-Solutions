class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end());
        int high = 0;
        for (int w : weights) {
            high += w;
        }
        while (low <= high) {
            int cnt = 0;
            int capacity = 0;
            int mid = low + (high - low) / 2;

            for (int p : weights) {

                if (capacity + p <= mid) {
                    capacity += p;
                } else {

                    cnt++;
                    capacity = p;
                }
            }
            cnt++;
            if (cnt <= days) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};