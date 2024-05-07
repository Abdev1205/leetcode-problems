class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int start=0; 
        int end = nums.size()-1;
        int maxGap=0;
        while(start<end){
            if(nums[start+1]-nums[start]>maxGap){
                maxGap=nums[start+1]-nums[start];
               
            }
            else if(nums.size()==1){
                return 0;
            }
            start++;
        }
        return maxGap;
    }
};