class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        string prefix = strs[0];               // start by guessing the whole first word

        for (int i = 1; i < strs.size(); i++) {
            while (strs[i].find(prefix) != 0) { // prefix not at the start of strs[i]?
                prefix = prefix.substr(0, prefix.size() - 1); // cut last char
                if (prefix.empty()) return "";  // nothing common at all
            }
        }
        return prefix;
    }
};