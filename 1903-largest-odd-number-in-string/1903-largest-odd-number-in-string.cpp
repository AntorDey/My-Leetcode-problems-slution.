class Solution {
public:
    string largestOddNumber(string& s) {
        
        // last digit check
        if((s[s.size() - 1] - '0') % 2 != 0)
            return s;

        // reverse loop to find first odd
        for(int i = s.size() - 1; i >= 0; i--){
            if((s[i] - '0') % 2 != 0){
                
                string ans = s.substr(0, i + 1);

                // remove leading zeros
                int j = 0;
                while(j < ans.size() && ans[j] == '0'){
                    j++;
                }

                return ans.substr(j);
            }
        }

        // if no odd digit found
        return "";
    }
};