class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long index = 0;
        long long lSum = nums[index];
        long long rSum = accumulate(nums.begin(),nums.end(), 0LL);
        // cout<<rSum<<endl;
        long long ans = 0;
        rSum-=lSum;
        long long len = nums.size();
        while(index<len-1){
            // cout<<lSum<<" : "<<rSum<<" = "<<index<<endl;
            if(lSum>=rSum){
                ans++;
            }
            index++;
            lSum+=nums[index];
            rSum-=nums[index];
        }

        return ans;
    }
};