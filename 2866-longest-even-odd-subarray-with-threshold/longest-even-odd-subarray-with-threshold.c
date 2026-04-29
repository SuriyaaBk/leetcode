int longestAlternatingSubarray(int* nums, int numsSize, int threshold) {
    int ans = 0;
    for(int i = 0; i < numsSize; i++) {
        if((nums[i] & 1) == 0) {
            int f = 0, c = 0;
            for(int j = i; j < numsSize; j++, f ^= 1) {
                if(nums[j] <= threshold && (nums[j] & 1) == f) c++;
                else break;
            }
            ans = fmax(ans, c);
        }
    }
    return ans;
}   