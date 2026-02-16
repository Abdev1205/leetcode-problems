class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq;

        for(auto n:nums){
            mp[n]++;
        }

        for(auto m:mp){
            // add to pq
            pq.push({m.second,m.first});
            if(pq.size()>k){
                pq.pop();
            }
        }

        vector<int> ans;
        while(!pq.empty()){
            ans.push_back(pq.top()[1]);
            pq.pop();
        }

        return ans;


    }
};