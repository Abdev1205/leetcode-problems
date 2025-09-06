class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.size()>t.size()) return false;

        int i=0;
        int j=0;

        while(i<s.size() && j<t.size()){
            if(s[i]==t[j]){
                // means we got the match in order 
                i++;
            }
            j++;
        }

        // if i = s.size() which means all the element are there in order other wise no
        return i==s.size();
    }
};