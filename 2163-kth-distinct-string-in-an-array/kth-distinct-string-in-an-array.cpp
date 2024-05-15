class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> mp;
        vector<string> distinct;

        for (auto a : arr) {
            mp[a]++;
            if (mp[a] == 1) // If it's the first occurrence of 'a'
                distinct.push_back(a);
            else if (mp[a] == 2) // If it's not unique anymore, remove it from distinct vector
                distinct.erase(remove(distinct.begin(), distinct.end(), a), distinct.end());
        }

        if (distinct.size() < k)
            return "";

        return distinct[k - 1];
    }
};