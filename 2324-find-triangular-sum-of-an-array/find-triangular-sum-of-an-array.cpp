class Solution {
public:
    int triangularSum(vector<int>& nums) {
        while(nums.size()>1){
            vector<int> v;
            for(int i=1; i<nums.size(); i++){
                int curr = nums[i-1]; 
                int next = nums[i];
                int sum = curr + next;
                // ok we need only ones digit 
                sum=sum%10;
                v.push_back(sum);
            }
            nums=v;
        }
        return nums[0];
    }
};