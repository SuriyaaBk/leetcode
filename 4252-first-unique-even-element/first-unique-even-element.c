int firstUniqueEven(int* nums, int numsSize) {
    int* hash = (int*)calloc(101, sizeof(int));
    int ans = -1;
    for(int i = 0; i < numsSize; i++) hash[nums[i]]++;
    for(int i = 0; i < numsSize; i++) {
        if(!(nums[i] & 1) && hash[nums[i]] == 1) {
            ans = nums[i];
            break;
        }
    }
    return ans;
}