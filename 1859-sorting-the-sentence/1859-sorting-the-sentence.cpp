class Solution {
public:
    string sortSentence(string s) {

    vector<string> words;
    string cur;
    stringstream ss(s);
    while (ss >> cur) words.push_back(cur);
    
    int n = words.size();
    vector<string> res(n); 

    for (string &w : words) {
        int i = (int)w.size() - 1;   
        int pos = 0;
        int mul = 1;
       
        while (i >= 0 && isdigit((unsigned char)w[i])) {
            pos += (w[i] - '0') * mul; 
            mul *= 10;
            i--;
        }
        
        string realWord = w.substr(0, i + 1); 

        res[pos - 1] = realWord;
    }
    string answer;
    for (int k = 0; k < n; ++k) {
        if (k) answer += ' ';
        answer += res[k];
    }
    return answer;
}

};