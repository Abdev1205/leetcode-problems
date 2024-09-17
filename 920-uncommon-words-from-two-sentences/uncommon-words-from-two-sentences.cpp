

class Solution {
public:
    // Function to split a string based on a delimiter and populate the map
    void split(const string &str, const string &del, unordered_map<string, int> &mp) {
        size_t start = 0;
        size_t end = 0;

        while ((end = str.find(del, start)) != string::npos) {
            mp[str.substr(start, end - start)]++;
            start = end + del.length();
        }

        mp[str.substr(start)]++;
    }

    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string, int> mp;
        string del = " ";  


        split(s1, del, mp);
        split(s2, del, mp);

        vector<string> ans;

        for (auto &m : mp) {
            if (m.second == 1) {
                ans.push_back(m.first);
            }
        }

        return ans;
    }
};

