class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        list<int> ls;
        for(auto n:nums){
            ls.push_back(n);
        }
        // applying the k operation 
        for(int i=0; i<k; i++){
            // 1st get last value and then remove it and then add it front
            int lastVal = ls.back();
            // remove the last value 
            ls.pop_back();

            // now add the last val in front
            ls.push_front(lastVal);
        }
        // vector<int> rotated;
        int i=0;
        for(auto l:ls){
            nums[i]=l;
            i++;
            // rotated.push_back(l);
        }
        // nums = rotated;
    }
};