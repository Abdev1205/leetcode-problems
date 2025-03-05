class Solution {
public:
    long long coloredCells(int n) {
        // Very easy Found the series 
        long long ans = 1;
        for(long long i=1; i<n; i++){
            ans+=(4*i);
        }

        return ans;
    }
};