class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0;
        int r=0;
        int maxlen =0;

        int n = s.size();

        vector<int> hash(256,-1);

        while(r<n){
            if(hash[s[r]]!=-1){
                // which means alrady there so we have to update the l and hash
                if(hash[s[r]]>=l){
                    l = hash[s[r]] + 1;
                }
            }

            int len = r-l+1;
            maxlen = max(len,maxlen);
            hash[s[r]] = r;
            r++;
        }

        return maxlen;

    }
};