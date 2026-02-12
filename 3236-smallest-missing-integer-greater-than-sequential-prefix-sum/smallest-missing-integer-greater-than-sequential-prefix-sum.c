int missingInteger(int* nums, int numsSize) {
    int* hash = (int*)calloc(51, sizeof(int));
    int sum = nums[0];
    for(int i = 0; i < numsSize; i++) hash[nums[i]] = 1;
    for(int i = 1; i < numsSize; i++) {
        if(nums[i] == nums[i - 1] + 1) sum += nums[i];
        else break;
    }
    while(sum <= 50) {
        if(hash[sum] == 0) return sum;
        sum++;
    }
    return sum;
}