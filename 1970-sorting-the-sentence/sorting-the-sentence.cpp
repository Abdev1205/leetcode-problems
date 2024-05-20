class Solution {
public:

    static bool compare(string a, string b){
        return int(a[a.size()-1]) <int(b[b.size()-1]);
    }

    string sortSentence(string s) {
        vector<string> w;
        string temp = "";

        for (int i = 0; i < s.size(); i++) {
            if (s[i] != ' ') {
                temp += s[i];
            } else {
                if (!temp.empty()) {
                    w.push_back(temp);
                    temp = "";
                }
            }
        }

        // Add the last segment if it exists
        if (!temp.empty()) {
            w.push_back(temp);
        }
        sort(w.begin(),w.end(),compare);
        string ans="";

        for (auto w : w) {
            if(!w.empty()){
                w.pop_back();
            }
            ans+=w;
            ans+=" ";
            cout << w << " ";
        }
        ans.pop_back();
        return ans;
    }
};