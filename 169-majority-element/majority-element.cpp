class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> hashmap;
        for(int i=0; i<nums.size(); i++){
            hashmap[nums[i]]++;
        }
        int ans;
        int f=nums.size()/2;
        for(auto it:hashmap){
            if(it.second>f){
                ans=it.first;
            }
        }
        return ans;
    }
};