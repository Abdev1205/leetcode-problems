class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxy = INT_MIN;
        int sum = 0;
        for(auto n:nums){
            sum+=n;
            maxy = max(maxy,sum);
            if(sum<0){
                sum=0;
            }
        }
        return maxy;
    }
};