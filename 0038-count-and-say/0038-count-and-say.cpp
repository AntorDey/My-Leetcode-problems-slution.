// class Solution {
// public:
//     string countAndSay(int n) {
//         string s = "1";

//         for (int i = 2; i <= n; i++) {
//             string next = "";
//             int count = 1;

//             for (int j = 1; j <= s.size(); j++) {
//                 if (j < s.size() && s[j] == s[j - 1]) {
//                     count++;                            // same digit, keep counting
//                 } else {
//                     next += to_string(count) + s[j - 1]; // write "count digit"
//                     count = 1;                          // reset for the next group
//                 }
//             }
//             s = next;
//         }
//         return s;
//     }
// };
class Solution {
public:
    string countAndSay(int n) {
        string s = "1";

        while (--n > 0) {
            string next;
            for (int i = 0; i < s.size();) {
                int j = i;
                while (j < s.size() && s[j] == s[i]) j++;  // find the end of the group

                next += char('0' + (j - i));  // count (never exceeds 3 in this sequence)
                next += s[i];                 // digit
                i = j;                        // jump to the next group
            }
            s = next;
        }
        return s;
    }
};