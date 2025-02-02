class Solution {
public:
    bool check(vector<int>& nums) {
        // brute force 
        // I know this approach is not efficient at all 
        // I want to follow atmost basic approach
        int len = nums.size();
        // 1st I will find the peak element
        int peak = 0;
        for (int i = 1; i < len; i++) {
            int curr = nums[i - 1];
            int next = nums[i];
            if (next < curr) {
                peak = i;
                break;
            }
        }

        cout << "Peak --> " << peak << endl;

        // Now I can divide single array in 2 array and then combine to form rotated
        // sorted If sorted so return true else false

        vector<int> left(nums.begin(), nums.begin() + peak);
        vector<int> right(nums.begin() + peak, nums.end());

        cout << "Printing Left --> " << endl;
        for (auto a : left) {
            cout << a << " ";
        }
        cout << endl;
        cout << "Printing Right --> " << endl;

        for (auto a : right) {
            cout << a << " ";
        }
        vector<int> rotArr;
        if (left.empty() || right.empty() || left[0] < right[0]) {
            rotArr.insert(rotArr.end(), left.begin(), left.end());
            rotArr.insert(rotArr.end(), right.begin(), right.end());
        } else {
            rotArr.insert(rotArr.end(), right.begin(), right.end());
            rotArr.insert(rotArr.end(), left.begin(), left.end());
        }

        cout<<endl << "Rotated Array --> " << endl;
        for (auto a : rotArr) {
            cout << a << " ";
        }

        if(is_sorted(rotArr.begin(),rotArr.end())){
            return true;
        }

        return false;
    }
};