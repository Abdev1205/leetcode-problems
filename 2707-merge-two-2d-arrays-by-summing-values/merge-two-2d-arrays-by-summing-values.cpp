class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        map<int,int> mp;
        for(int i=0; i<nums1.size(); i++){
            int a = nums1[i][0];
            int b = nums1[i][1];
            mp[a]+=b;
        }
        for(int i=0; i<nums2.size(); i++){
            int a = nums2[i][0];
            int b = nums2[i][1];
            mp[a]+=b;
        }
        vector<vector<int>> ans;
        for(auto m:mp){
            ans.push_back({m.first,m.second});
        }

        return ans;
    }
};