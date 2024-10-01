class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int ans=0;
        unordered_map<int,int> mp;

        for(auto n:nums){
            mp[n]++;
        }

        for(auto m:mp){
            if(m.second==1){
                // cout<<m.first<<" : "<<m.second<<endl;
                // cout<<ans;
                ans+=m.first;
            }
        }

        return ans;
    }
};