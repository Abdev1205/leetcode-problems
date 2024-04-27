class Solution {
public:
    int averageValue(vector<int>& nums) {
        vector<int> even;
        for(auto n:nums){
            if(n%2==0 && n%3==0){
                even.push_back(n);
            }
        }
        if(even.size()==0){
            return 0;
        }
        int total=0;
        for(auto e:even){
            total+=e;
        }
        return total/even.size();
    }
};