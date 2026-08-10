class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        int l = 0;
        int r = 0;
        int len =0;
        int max_freq =0;
        int cnt[26] = {0};
        while(r < n){
            int ch = s.at(r);
            cnt[ch - 'A']++;
            
            max_freq = max(max_freq,cnt[ch - 'A']);
            if((r-l+1)-max_freq > k){
             cnt[s[l]-'A']--;
              l++;
            }
            len = max(len,r-l+1);
            r++;
        }
        return len;
        
    }
};