class Solution {
public:

    int maxSpliting(const string &s, int start, unordered_set<string> &substr) {
        if (start == s.size()) {
            return 0;  
        }

        int maxSplits = 0;
        string currSubstr = "";

        for (int i = start; i < s.size(); ++i) {
            currSubstr += s[i];
            if (substr.find(currSubstr) == substr.end()) {
                substr.insert(currSubstr);
                int splits = 1 + maxSpliting(s, i + 1, substr);
                maxSplits = max(maxSplits, splits);
                substr.erase(currSubstr);  
            }
        }

        return maxSplits;
    }

    int maxUniqueSplit(string s) {
        unordered_set<string> substr;
        return maxSpliting(s, 0, substr);
    }
};
