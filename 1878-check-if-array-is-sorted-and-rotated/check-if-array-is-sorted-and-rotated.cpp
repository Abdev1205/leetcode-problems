class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int counter=0;
        for(int i=1; i<n; i++){
            if(nums[i-1]>nums[i]){
                counter++;
            }
        }
        if(nums[n-1]>nums[0]){
            counter++;
        }
        return counter<=1;

    }
};