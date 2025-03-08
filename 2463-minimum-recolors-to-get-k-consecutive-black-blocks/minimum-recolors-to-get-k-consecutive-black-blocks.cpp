class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n = blocks.size();
        int mo = INT_MAX;

        int wc = 0;
        for (int i = 0; i < k; i++) {
            if (blocks[i] == 'W') {
                wc++;
            }
        }
        mo = wc;

        for (int i = k; i < n; i++) {
            if (blocks[i - k] == 'W') wc--; 
            if (blocks[i] == 'W') wc++;
            mo = min(mo, wc);
        }

        return mo;
    }
};