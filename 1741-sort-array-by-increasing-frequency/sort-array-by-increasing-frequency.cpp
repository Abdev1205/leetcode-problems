class Solution {
public:

    static bool cmp(pair<int,int> &A, pair<int,int> &B){
        if (A.second != B.second) 
            return A.second < B.second; 
        else 
            return A.first > B.first; 
    }

    vector<int> addVal( vector<pair<int,int>> v){
        vector<int> ans;
        for(auto it:v){
            for(int i=0; i<it.second;i++){
                ans.push_back(it.first);
            }
        }
        return ans;
    }

    vector<int> sortVector(map<int,int> &hashMap){
        vector<pair<int,int>> v;
        for(auto it:hashMap){
            v.push_back(it);
        }
        sort(v.begin(), v.end(), cmp); 
        return addVal(v);
    }

    vector<int> frequencySort(vector<int>& nums) {
        map<int,int> hashMap;
        for(int i=0; i<nums.size(); i++){
            hashMap[nums[i]]++;
        }
        return sortVector(hashMap);
    }
};