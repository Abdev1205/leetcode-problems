class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        // brute force
        int ans = 0;
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                int diff = abs(nums[i]-nums[j]);
                if(diff==k){
                    ans++;
                }
            }
        }

        return ans;
    }
};