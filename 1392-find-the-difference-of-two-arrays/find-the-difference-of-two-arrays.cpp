class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> ans(2);
        set<int> s1,s2;
        for(auto x:nums1){
            s1.insert(x);
        }
        for(auto x:nums2){
            s2.insert(x);
        }
        for(auto x:s2){
            if(s1.find(x)==s1.end()){
                ans[1].push_back(x);
            }
        }
        for(auto x:s1){
            if(s2.find(x)==s2.end()){
                ans[0].push_back(x);
            }
        }
        return ans;
    }
};