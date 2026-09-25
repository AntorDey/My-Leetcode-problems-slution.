// class Solution {
// public:
//     vector<vector<string>> groupAnagrams(vector<string>& strs) {
//         map<string, vector<string>> mp;

//         for (int i = 0; i < strs.size(); i++) {
//             string s = strs[i];
//             string temp = s;

//             sort(temp.begin(), temp.end()); // sort string

//             mp[temp].push_back(s); // original string store
//         }

//         vector<vector<string>> ans;

//         for (auto it : mp) {
//             ans.push_back(it.second);
//         }

//         return ans;
//     }
// };
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> groups;

        for (string& s : strs) {
            string key = s;
            sort(key.begin(), key.end());  // sorted version acts as the "signature"
            groups[key].push_back(s);      // add original word to its group
        }

        vector<vector<string>> result;
        for (auto& pair : groups) {
            result.push_back(pair.second);
        }

        return result;
    }
};