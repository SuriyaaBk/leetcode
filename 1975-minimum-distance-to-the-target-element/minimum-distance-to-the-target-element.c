int getMinDistance(int* nums, int numsSize, int target, int start) {
    int ans1 = numsSize, ans2 = numsSize;
    for(int i = start; i < numsSize; i++) {
        if(nums[i] == target) {
            ans1 = i - start;
            break;
        }
    }
    for(int i = start; i >= 0; i--) {
        if(nums[i] == target) {
            ans2 = start - i;
            break;
        }
    }
    return fmin(ans1, ans2);
}