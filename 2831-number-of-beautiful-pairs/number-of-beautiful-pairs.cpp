class Solution {
public:
    int countBeautifulPairs(vector<int>& nums) {
        int ans = 0;

        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                string curr = to_string(nums[i]);
                string next = to_string(nums[j]);
                int f = curr[0] - '0' ;
                int l = next[next.size()-1] - '0';

                if(__gcd(f,l)==1){
                    ans++;
                }
            }
            
        }

        return ans;
    }
};