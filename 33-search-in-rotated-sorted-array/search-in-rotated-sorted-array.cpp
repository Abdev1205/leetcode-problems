class Solution {
public:
    int findPeak(vector<int>& nums){
        int start = 0;
        int end = nums.size()-1;

        while(start<end){
            int mid = start + (end-start)/2;
            if(nums[mid]>nums[end]){
                start = mid+1;
            }
            else{
                end = mid;
            }
        }

        return start;
    }

    int binary(vector<int>& nums, int target, int start, int end){

        while(start<=end){
            int mid = start + (end-start)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(target>nums[mid]){
                start = mid +1;
            }
            else {
                end = mid-1;
            }
        }

        return -1;
    }


    int search(vector<int>& nums, int target) {
        int pivot = findPeak(nums);
        cout<<"Pivot -> "<<pivot<<endl;

        // break array in two sorted array and do binary search ther e
        
        int firstPart = binary(nums,target, 0, pivot-1);
        if(firstPart!=-1){
            return firstPart;
        }

        int secondPart = binary(nums,target, pivot,nums.size()-1);
        if(secondPart!=-1){
            return secondPart;
        }

        cout<<"Returning last"<<endl;

        return -1;
    }
};