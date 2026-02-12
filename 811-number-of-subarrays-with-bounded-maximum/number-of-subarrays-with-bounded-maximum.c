int numSubarrayBoundedMax(int* nums, int numsSize, int left, int right) {
    int ans = 0, c1 = 0, c2 = 0;
    for(int i = 0; i < numsSize; i++) {
        if(nums[i] >= left && nums[i] <= right) {
            c1 += 1 + c2;
            c2 = 0;
        } else if(nums[i] > right) { 
            c1 = 0;
            c2 = 0;
        } else c2 += 1;
        ans += c1;
    }
    return ans;
}