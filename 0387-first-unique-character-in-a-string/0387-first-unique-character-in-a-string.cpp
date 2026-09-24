class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> freq;

        // Step 1: count every character
        for (char c : s) {
            freq[c]++;
        }

        // Step 2: find the first character with count 1
        for (int i = 0; i < s.size(); i++) {
            if (freq[s[i]] == 1) {
                return i;
            }
        }
        return -1;
    }
};