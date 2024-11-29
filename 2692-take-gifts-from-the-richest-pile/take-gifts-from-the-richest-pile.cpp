#include <vector>
#include <algorithm>
#include <cmath>

class Solution {
public:
    long long pickGifts(std::vector<int>& gifts, int k) {
        priority_queue<int> maxHeap(gifts.begin(), gifts.end());

        while (k-- > 0 && !maxHeap.empty()) {
            int maxy = maxHeap.top();
            maxHeap.pop();

            maxHeap.push(static_cast<int>(std::sqrt(maxy)));
        }

        long long ans = 0;
        while (!maxHeap.empty()) {
            ans += maxHeap.top();
            maxHeap.pop();
        }

        return ans;
    }
};
