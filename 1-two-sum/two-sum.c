

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
     int *c=malloc(2 * sizeof(int));
     c[0]=1;
     c[1]=1;
        for(int i=0;i<numsSize;i++)
        {
            for(int j=i+1;j<numsSize;j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    *returnSize = 2;
                   c[0]=i;
                   c[1]=j;
                   return c;
                   
                }
              
            }
        
        }
        *returnSize = 0;
        // free(c);
        return 0;
    }

