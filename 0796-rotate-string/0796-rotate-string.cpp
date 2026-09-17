class Solution {
public:
    bool rotateString(string s, string goal) {
        // step 1: size same naki check
        if(s.size() != goal.size()) return false;

        // step 2: main trick
        return (s + s).find(goal) != string::npos;
    }
};
