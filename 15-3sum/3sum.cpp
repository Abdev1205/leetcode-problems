class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // chalo aj kar hi lete hai 
        // 3 sum 

        // optimal answer
        // using two pointer apporopach 

        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        int n = nums.size();

        for(int i=0; i<n; i++){
            // we will move the i till we don't have the previous same element 
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }

            int j = i+1;
            int k = n-1;
            while(j<k){
                int sum = nums[i] + nums[j] + nums[k];
                if(sum<0){
                    j++;
                }
                else if(sum>0){
                    k--;
                }
                else{
                    // we are here which means that we found the triplet
                    vector<int> temp ={nums[i],nums[j],nums[k]};
                    ans.push_back(temp);
                    j++;
                    k--;
                    // abb hame i j ko firse place karna 
                    // to uske different no pe place karna hai
                    while(j<k && nums[j]==nums[j-1]){
                        j++;
                    }
                    while(j<k && nums[k]==nums[k+1]){
                        k--;
                    }
                }

            }
        }
        return ans;

        // set<vector<int>> ans;
        
        // Approach 1 0(n3 log n) // pure brute force ans passed 276 / 313
        // for(int i=0; i<nums.size(); i++){
        //     for(int j=i+1; j<nums.size(); j++){
        //         for(int k=j+1; k<nums.size(); k++){
        //             int sum = nums[i]+nums[j]+nums[k];
        //             bool cond = i != j && i != k && j != k;
        //             if(sum==0 && cond ){
        //                 vector<int> triplet = {nums[i], nums[j], nums[k]};
        //                 sort(triplet.begin(), triplet.end()); // Sort the triplet to avoid duplicates
        //                 ans.insert(triplet);
        //                 cout<<"i: "<<triplet[0]<<" j: "<<triplet[1]<<" k: "<<triplet[2]<<" sum = "<<sum<<" conditoin is "<<cond<<endl;
        //             }
        //         }
        //     }
        // }
        // return vector<vector<int>>(ans.begin(), ans.end());

        // using math for finding the third ele // and passed 311 / 313 testcases passed
        // set<vector<int>> ansSet;
        // int n = nums.size();

        // for(int i=0; i<n; i++){
        //     // creating a new set 
        //     set<int> counterSet;
        //     for(int j=i+1; j<n; j++){
        //         int third = -(nums[i]+nums[j]);
        //         // now find the the third in set and if found then store in the ans set
        //         if(counterSet.find(third)!=counterSet.end()){
        //             vector<int> temp = {nums[i],nums[j],third};
        //             sort(temp.begin(),temp.end());
        //             ansSet.insert(temp);
        //         }
        //         counterSet.insert(nums[j]);
        //     }
        // }
        // return vector<vector<int>>(ansSet.begin(), ansSet.end());

    }
};