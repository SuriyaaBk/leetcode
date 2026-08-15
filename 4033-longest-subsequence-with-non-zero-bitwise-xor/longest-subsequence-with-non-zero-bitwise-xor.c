int longestSubsequence(int* nums, int numsSize) {
    bool zero = true;
    int xor = 0;
    for(int i = 0; i<numsSize; i++){
        if(nums[i] != 0) zero = false;
        xor ^= nums[i];
    }
    if(zero == true) return 0;
    else if(xor == 0) return numsSize - 1;
    return numsSize;
}