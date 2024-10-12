/**
 * @param {number[]} nums
 * @param {number} val
 * @return {number}
 */
var removeElement = function(nums, val) {
    let farr = nums.filter((n) => n !== val); // Filter out elements equal to val
    
    // Copy elements of farr back into nums to maintain in-place modification
    for (let i = 0; i < farr.length; i++) {
        nums[i] = farr[i];
    }
    
    // Return the new length of the filtered array
    return farr.length;
};