bool isGood(int* nums, int numsSize) {
    if(numsSize == 1) return false;
    int* hash = (int*)calloc(200, sizeof(int));
    for(int i = 0; i < numsSize; i++) hash[nums[i] - 1]++;
    hash[numsSize - 2]--;
    for(int i = 0; i < numsSize - 1; i++) {
        if(hash[i] != 1) return false;
    }
    return true;
}