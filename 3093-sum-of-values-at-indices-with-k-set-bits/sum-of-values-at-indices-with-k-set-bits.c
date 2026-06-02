int sumIndicesWithKSetBits(int* nums, int numsSize, int k) {
    int ans=0;
    for(int i = 0; i < numsSize; i++) {
        int bits = 0, n = i;
        while(n > 0) {
            n &= n - 1;
            bits++;
        }
        if(bits == k) ans += nums[i];
    }    
    return ans;
}