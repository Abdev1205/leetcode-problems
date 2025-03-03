class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        // brute force
        vector<int> less;   
        vector<int> equal;   
        vector<int> more;
        for(auto n:nums){
            if(n<pivot){
                less.push_back(n);
                continue;
            }
            else if(n==pivot){
                equal.push_back(n);
                continue;
            }
            else{
                more.push_back(n);
            }
        }

        // now we will merge that three array in single array
        vector<int> ans;
        for(auto n:less){
            ans.push_back(n);
        }
        for(auto n:equal){
            ans.push_back(n);
        }
        for(auto n:more){
            ans.push_back(n);
        }

        return ans;
    }
};