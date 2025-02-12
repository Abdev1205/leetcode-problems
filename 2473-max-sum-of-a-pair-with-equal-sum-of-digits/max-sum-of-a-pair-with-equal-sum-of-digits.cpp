class Solution {
public:
    int digSum(int num) {
        int sum = 0;
        while (num > 0) {
            sum += num % 10;  
            num /= 10;  
        }
        return sum;
    }

    int maximumSum(vector<int>& nums) {
        unordered_map<int, int> digitSumMap;
        int maxSum = -1;

        for (int num : nums) {
            int sum = digSum(num);

            if (digitSumMap.find(sum) != digitSumMap.end()) {
                maxSum = max(maxSum, num + digitSumMap[sum]);
            }
            digitSumMap[sum] = max(digitSumMap[sum], num);
        }

        return maxSum;
    }
};