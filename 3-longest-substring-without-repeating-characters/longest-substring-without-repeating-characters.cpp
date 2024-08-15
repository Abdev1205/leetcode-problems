class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l =0;
        int r =0;
        int maxlen = 0;
        vector<int> freq(256,-1);
        int n = s.size();

        while(r<n){
            // if we found the r in freq so we just update the l 
            if(freq[s[r]]!=-1){
                // if r is already present in freq and also it is in range
                if(freq[s[r]]>=l){
                    // updating the l so that to avoid repeating char
                    l = freq[s[r]]+1;
                }
            }
            int len = r-l+1;
            maxlen = max(maxlen,len);
            freq[s[r]]=r;
            r++;
        }
        return maxlen;
    }
};