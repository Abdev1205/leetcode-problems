class Solution {
public:
    int numSplits(string s) {
        int n = s.size();
        vector<int> leftDistinct(n, 0), rightDistinct(n, 0);
        unordered_set<char> seen;

        // Calculate leftDistinct
        for (int i = 0; i < n; ++i) {
            seen.insert(s[i]);
            leftDistinct[i] = seen.size();
        }

        seen.clear();

        // Calculate rightDistinct
        for (int i = n - 1; i >= 0; --i) {
            seen.insert(s[i]);
            rightDistinct[i] = seen.size();
        }

        // Count good splits
        int goodSplits = 0;
        for (int i = 0; i < n - 1; ++i) {
            if (leftDistinct[i] == rightDistinct[i + 1]) {
                ++goodSplits;
            }
        }

        return goodSplits;
    }
};