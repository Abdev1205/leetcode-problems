class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        // brute force

        vector<int> ans;
        for(int i=0; i<nums1.size(); i++){
            // find in nums 2 
            int eleIndex = -1;
            int nextMax = INT_MIN;
            for(int j=0; j<nums2.size(); j++){
                if(nums2[j]==nums1[i] && eleIndex==-1){
                    // first find
                    eleIndex = j;
                }
                else if(eleIndex!=-1 && nextMax==INT_MIN && nums2[j]>nums2[eleIndex]){
                    nextMax=nums2[j];
                    break;   
                }
            }
            if(nextMax!=INT_MIN){
                ans.push_back(nextMax);
            }
            else{
                ans.push_back(-1);
            }
        }

        return ans;
    }
};