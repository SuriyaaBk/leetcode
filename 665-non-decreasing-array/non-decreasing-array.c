bool checkPossibility(int* nums, int numsSize) {
    int flag = 0;
    for(int i = 0; i < numsSize - 1; i++) {
        if(nums[i] > nums[i + 1]) {
            flag += 1;
            if(flag > 1) return false;
            if(i == 0 || nums[i - 1] <= nums[i + 1]) nums[i] = nums[i + 1];
            else nums[i + 1] = nums[i];
        }
    }
    return true;
}