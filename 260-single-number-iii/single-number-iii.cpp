class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        map<int,int> mp;
        for(auto n:nums){
            mp[n]++;
        }

        vector<int> ans;

        for(auto m:mp){
            cout<<m.first<<" : "<<m.second<<endl;
            if(m.second==1){
                ans.push_back(m.first);
            }
        }
        return ans;
    }
};