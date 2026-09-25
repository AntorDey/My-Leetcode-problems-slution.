class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> mp;

        for (int i = 0; i < strs.size(); i++) {
            string s = strs[i];
            string temp = s;

            sort(temp.begin(), temp.end()); // sort string

            mp[temp].push_back(s); // original string store
        }

        vector<vector<string>> ans;

        for (auto it : mp) {
            ans.push_back(it.second);
        }

        return ans;
    }
};