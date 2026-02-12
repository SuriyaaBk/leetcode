int numSubarrayBoundedMax(int* nums, int numsSize, int left, int right) {
    int ans = 0, c = 0, j = 0;
    for(int i = 0; i < numsSize; i++) {
        if(nums[i] >= left && nums[i] <= right) {
            c = i - j + 1;
        } else if(nums[i] > right) { 
            j = i + 1;
            c = 0;
        }
        ans += c;
    }
    return ans;
}