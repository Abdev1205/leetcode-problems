class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int tlen = grid.size() * grid[0].size();
        vector<int>freq(tlen+1,0);

        for(int i =0; i<grid.size(); i++){
            for(int j=0; j<grid[i].size(); j++){
                freq[grid[i][j]]++;
            }
        }
        vector<int> ans(2,0);

        for(int i=0; i<freq.size(); i++){
            if(freq[i]==0){
                ans[1]=i;
            }
            else if(freq[i]>=2){
                ans[0]=i;
            }
        }
        return ans;
    }
};