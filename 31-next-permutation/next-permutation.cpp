class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i=0;
        // check if it reversed
        // bool isSortedReverse = is_sorted(nums.begin(),nums.end(),greater<int>());
        // if(isSortedReverse){
        //     // cout<<"true"<<endl;
        //     return;
        // }
        do{
            if(i==1) break;
            for(int i=0; i<nums.size(); i++){
                cout<<nums[i]<<" ";
            }
            i++;
        }
        while(next_permutation(nums.begin(),nums.end()));
    }
};