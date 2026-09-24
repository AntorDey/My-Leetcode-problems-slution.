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
        if(n==1)
        return "1";
        string say = countAndSay(n-1);
        string result = "";
        for(int i = 0; i< say.size(); i++){
            char ch = say[i];
            int count = 1;
            while (i<say.size()-1 && say[i] == say[i+1]){
            count ++;
            i++;
        }
        result += to_string(count)+string(1,ch);
    }
    return result;
  }
};

        