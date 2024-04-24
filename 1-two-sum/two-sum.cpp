class Solution {

public:

    vector<int> twoSum(vector<int>& nums, int target) {

    unordered_map<int,int> hashMap;

    for(int i=0; i<nums.size(); i++){

        int value = target-nums[i];

        if(hashMap.find(value)!=hashMap.end()){

            cout<<hashMap[value];

            return {hashMap[value],i};

        }

        hashMap[nums[i]]=i;

        

    }

    return{};

    };

    

};


        

