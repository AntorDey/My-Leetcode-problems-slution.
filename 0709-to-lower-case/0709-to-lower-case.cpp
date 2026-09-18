class Solution {
public:

string toLowerCase(string s) {

    for (int i = 0; i < (int)s.size(); ++i) {
        char c = s[i];
        if (c >= 'A' && c <= 'Z') {
            s[i] = static_cast<char>(c+32); // or c + 32
        }
    }
    return s;
}
};