// https://leetcode.com/problems/3sum/

 var threeSum = function(nums) {
    nums.sort((a,b) => a - b);
    const arr = [];
    if (!Array.isArray(nums) || nums.length < 3) {
        return arr;
    }
    for (let i = 0; i < nums.length; i++) {
        let mid = i+1, high=nums.length-1, sum =0;
        while( mid < high){
            sum = nums[i] + nums[mid] + nums[high];
            
            if (sum === 0) {
                arr.push([nums[i], nums[mid], nums[high]]);
                while(nums[mid+1] === nums[mid]) mid++;
                while(nums[high-1] === nums[high]) high--;
                mid++;
                high--;
            } else if (sum < 0) mid++;
            else high--
        }
        while(nums[i+1] === nums[i]) i++
    }
    return arr
};