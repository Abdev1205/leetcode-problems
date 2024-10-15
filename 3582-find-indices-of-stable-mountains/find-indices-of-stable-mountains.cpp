class Solution {
public:
    vector<int> stableMountains(vector<int>& h, int t) {
        vector<int> ans;
        for(int i=h.size()-1; i>0; i--){
            int curr = h[i];
            int prev = h[i-1];

            if(prev>t){
                ans.push_back(i);
            }
        }

        return ans;
    }
};