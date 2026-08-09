class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        int max_len =0;
        unordered_map<int,int> mp;
        int left=0;
        for(int i=0;i<n;i++){
            mp[fruits[i]]++;
            while(mp.size() > 2){
                mp[fruits[left]]--;
                if(mp[fruits[left]] == 0){
                    mp.erase(fruits[left]);
                }
                left++;
               
            }
             max_len = max(max_len,i-left+1);
        }
        return max_len;
    }
};