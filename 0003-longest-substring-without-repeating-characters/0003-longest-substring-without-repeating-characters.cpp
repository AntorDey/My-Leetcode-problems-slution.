class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int freq[256] = {0};

        int left = 0;
        int ans = 0;

        for(int right = 0; right < s.size(); right++) {

            freq[s[right]]++;  // add

            // jodi duplicate hoy
            while(freq[s[right]] > 1) {
                freq[s[left]]--;  // remove
                left++;
            }

            int len = right - left + 1;

            if(len > ans) {
                ans = len;
            }
        }

        return ans;
    }
};