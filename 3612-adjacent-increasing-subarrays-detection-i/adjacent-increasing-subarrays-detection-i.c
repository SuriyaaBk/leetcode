bool hasIncreasingSubarrays(int* nums, int numsSize, int k) {
    for(int i = 0; i <= numsSize - 2 * k; i++) {
        int flag = true;
        for(int j = i; j < i + k - 1; j++) {
            if(nums[j] >= nums[j + 1]) {
                flag = false;
                break;
            }
        }
        if(flag == true) {
            for(int j = i + k; j < i + 
            2 * k - 1; j++) {
                if(nums[j] >= nums[j+ 1]) {
                    flag = false;
                    break;
                }
            }
        }
        if(flag == true) return true;
    }   
    return false; 
}