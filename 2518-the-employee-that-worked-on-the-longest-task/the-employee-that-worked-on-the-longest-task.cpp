class Solution {
public:
    static bool compare(pair<int, int> a, pair<int, int> b) {
        if (a.second != b.second) {
            return a.second > b.second;
        } else {
            return a.first < b.first;
        }
    }

    int hardestWorker(int n, vector<vector<int>>& logs) {
        vector<pair<int, int>> v;
        int prevTime = 0;
        for (int i = 0; i < logs.size(); i++) {
            int timeTaken = i == 0 ? logs[i][1] : logs[i][1] - logs[i - 1][1];
            v.push_back({logs[i][0], timeTaken});
        }

        sort(v.begin(), v.end(), compare);
        return v[0].first;
    }
};