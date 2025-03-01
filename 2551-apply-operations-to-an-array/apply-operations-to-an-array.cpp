class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int len = nums.size();
        for(int i=1; i<len; i++){
            int curr = nums[i-1];
            int next = nums[i];
            if(curr==next){
                nums[i-1] *=2;
                nums[i] = 0;
            }
        }
        vector<int> ans;
        int z =0;
        for(auto n:nums){
            if(n!=0){
                ans.push_back(n);
                
            }
            else{
                z++;
            }
            
        }

        for(int i=0; i<z; i++){
            ans.push_back(0);
        }

        
        return ans;
    }
};