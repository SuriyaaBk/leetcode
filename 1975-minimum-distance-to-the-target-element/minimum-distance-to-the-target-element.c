int getMinDistance(int* nums, int numsSize, int target, int start) {
    int ans = numsSize;
    for(int i = 0; i < numsSize; i++) {
        if(nums[i] == target) ans = fmin(ans, abs(start - i));
    }
    return ans;
}