int countSpecialIntegers(int* nums, int numsSize) {
    int ans = 0;
    int* hash = (int*)calloc(101, sizeof(int));
    hash[nums[0]] = 1;
    for(int i = 1; i < numsSize; i++) {
        if(nums[i] != nums[i - 1]) {
            if(hash[nums[i]] == 0) hash[nums[i]] = 1;
            else hash[nums[i]] = -1;
        }
    }
    for(int i = 0; i <= 100; i++) {
        if(hash[i] == 1) ans += 1;
    }
    free(hash);
    return ans;
}