class Solution {
public:
    int solve(string &s, int k,int num) {
        int ans = 0;
        int n = s.size();
        for (int start = 0; start <= n - k; ++start) {
            string current = "";
            for (int i = start; i < start + k; ++i) {
                current += s[i];
            }
            // check the string 
            int val = stoi(current);
            cout<<"val : "<<val<<" and num : "<<num<<endl;
            if(val==0){
                continue;
            }
            if(num%val==0){
                ans++;
            }
        }
        return ans;
    }

    int divisorSubstrings(int num, int k) {
        string s = to_string(num);
        return solve(s, k,num);
    }
};