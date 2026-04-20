class Solution {
public:
    int maxDistance(vector<int>& colors) {
        // brute force
        int ans = INT_MIN;
        
        for(int i=0; i<colors.size(); i++){
            int c = colors[i];
            for(int j=i; j<colors.size(); j++){
                int nc = colors[j];
                if(c==nc){
                    continue;
                }
                else{
                    int diff = abs(i-j);
                    ans = max(diff,ans);
                }
            }
        }

        return ans;
    }
};