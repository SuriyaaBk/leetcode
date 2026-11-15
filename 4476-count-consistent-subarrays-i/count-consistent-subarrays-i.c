int countConsistent(int* nums, int numsSize) {
    int ans = 0;
    for(int i = 0; i < numsSize; i++) {
        int and = nums[i], min = nums[i];
        for(int j = i; j >= 0; j--) {
            and &= nums[j];
            min = fmin(min, nums[j]);
            if(min == and) ans++;
        }
    }
    return ans;
}