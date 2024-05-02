class Solution {
public:

    bool isNegExist(vector<int>& nums,int n){
        for(int i=0;  i<nums.size(); i++){
            if(nums[i]==-n){
                return true;
            }
        }
        return false;
    }

    static bool compare(int a, int b){
        return a>b;
    }

    int findMaxK(vector<int>& nums) {
        vector<int> pos;
        vector<int> neg;
        for(auto n:nums){
            if(n>0){
                pos.push_back(n);
            }
            else{
                neg.push_back(n);
            }
        }
        vector<int>arr;
        for(auto p:pos){
            if(isNegExist(neg,p)){
                arr.push_back(p);
            }
        }

        if(arr.size()==0){
            return -1;
        }

        sort(arr.begin(),arr.end(),compare);
        return arr[0];

    }
};