/**
 * @param {number[]} nums
 * @param {number} indexDifference
 * @param {number} valueDifference
 * @return {number[]}
 */
var findIndices = function(nums, indexDifference, valueDifference) {

    if(indexDifference==0 && valueDifference==0){
        return [0,0];
    }

    for(let i=0; i<nums.length; i++){
        for(let j=i+1; j<nums.length; j++){
            let vdiff = Math.abs(nums[i] - nums[j]);
            let idiff = Math.abs(i-j);

            if(idiff>=indexDifference && vdiff>=valueDifference){
                return [i,j];
            } 
        }
    }

    return [-1,-1];
};