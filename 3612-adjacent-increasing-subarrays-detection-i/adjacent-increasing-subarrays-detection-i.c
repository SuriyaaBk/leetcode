bool hasIncreasingSubarrays(int* nums, int numsSize, int k) {
    int n = 2 * k, prev = 0, curr = 1;
    for(int i = 1; i < numsSize; i++) {
        if(nums[i] > nums[i - 1]) curr += 1;
        else {
            prev = curr;
            curr = 1;
        }
        if((curr >= k && prev >= k) || curr >= n) return true;
    }
    return false;
}