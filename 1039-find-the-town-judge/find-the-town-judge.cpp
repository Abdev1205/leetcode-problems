class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> trustCount(n + 1, 0); 
        
        for (const auto& relation : trust) {
            int a = relation[0]; 
            int b = relation[1]; 
            trustCount[a]--; 
            trustCount[b]++;
        }
        

        for (int i = 1; i <= n; ++i) {
            if (trustCount[i] == n - 1) 
                return i;
        }
        
        return -1; 

    }
};