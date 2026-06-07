int maxSum(int* nums, int numsSize) {
    int ans = 0;
    int* hash = (int*)calloc(numsSize, sizeof(int));
    for(int i = 0; i < numsSize; i++) {
        int n = nums[i];
        while(n > 0) {
            hash[i] = fmax(hash[i], n % 10);
            n /= 10;
        }
    }
    for(int i = 0; i < numsSize; i++) {
        for(int j = i + 1; j < numsSize; j++) {
            if(hash[i] == hash[j]) ans = fmax(ans, nums[i] + nums[j]);
        }
    }
    return ans == 0 ? -1 : ans;
}