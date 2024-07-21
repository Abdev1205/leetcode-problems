class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int> freq(nums.size(),0);
        for(int i =0 ; i<nums.size(); i++){
            if(freq[nums[i]]>0){
                return nums[i];
            }
            freq[nums[i]]++;
        }
        return -1;
    }
};