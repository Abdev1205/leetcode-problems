class Solution {
public:
    int findMin(vector<int>& arr) {
        // we need to solve quuestion in logn tc so we are going to use binary search
        int start=0;
        int end= arr.size()-1;
        while(start<end){
            int mid = start+(end-start)/2;
            if(arr[mid]>arr[end]){
                start=mid+1;
            }
            else{
                end=mid;
            }
        }
        return arr[start];
    }
};