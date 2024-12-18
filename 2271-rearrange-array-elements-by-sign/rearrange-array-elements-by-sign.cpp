class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {  
        int neg=1;
        int pos=0;
        vector<int> ans(nums.size(),0);
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>0){
                ans[pos]=nums[i];
                pos=pos+2;
            }
            else{
                ans[neg]=nums[i];
                neg=neg+2;
            }
        }
        return ans;
    }
};