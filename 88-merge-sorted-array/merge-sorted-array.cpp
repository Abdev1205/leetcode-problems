class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> ans;
        int i=0;
        int j=0;
        while(i<m && j<n){
            if(nums1[i]<nums2[j]){
                ans.push_back(nums1[i]);
                i++;
            }
            else{
                ans.push_back(nums2[j]);
                j++;
            }
        }

        // now we have to case that
        // num1 got finished or num2 got finished
        while(i<m){
            ans.push_back(nums1[i]);
            i++;
        }

        while(j<n){
            ans.push_back(nums2[j]);
            j++;
        }

        nums1 = ans;
    }
};