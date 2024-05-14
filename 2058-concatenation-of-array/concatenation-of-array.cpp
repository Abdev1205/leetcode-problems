class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;
        for(auto n:nums){
            ans.push_back(n);
        }
        for(auto n:nums){
            ans.push_back(n);
        }
        return ans;
    }
};