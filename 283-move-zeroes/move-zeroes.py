class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        nonZIndex = 0
        l = len(nums)
        start=0
        while(start<l):
            if(nums[start]!=0):
                nums[nonZIndex]=nums[start]
                nonZIndex+=1
            start+=1
        
        # Adding Zeros for left over after non zero index

        while(nonZIndex<l):
            nums[nonZIndex]=0
            nonZIndex+=1
        