class Solution {
public:

    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        vector<pair<int, int>> jobs;
        for (int i = 0; i < difficulty.size(); ++i) {
            jobs.push_back({difficulty[i], profit[i]});
        }
        
        // Sort jobs by difficulty, and if equal, by profit descending
        sort(jobs.begin(), jobs.end());
        // Sort workers by their ability
        sort(worker.begin(), worker.end());

        int maxProfit = 0;
        int bestProfit = 0;
        int j = 0;

        for (int i = 0; i < worker.size(); ++i) {
            while (j < jobs.size() && worker[i] >= jobs[j].first) {
                bestProfit = max(bestProfit, jobs[j].second);
                ++j;
            }
            maxProfit += bestProfit;
        }

        return maxProfit;

    }
};