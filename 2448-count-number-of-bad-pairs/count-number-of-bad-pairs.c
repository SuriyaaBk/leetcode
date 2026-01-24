int compare(const void* a, const void* b) {
    return *(int*)a > *(int*)b;
}
long long countBadPairs(int* nums, int numsSize) {
    int* hash = (int*)malloc(numsSize * sizeof(int));
    long long GoodPairs = 0, c = 0;
    for(int i = 0; i < numsSize; i++) hash[i] = nums[i] - i;
    qsort(hash, numsSize, sizeof(int), compare);   
    for(int i = 1; i < numsSize; i++) {
        if(hash[i] == hash[i - 1]) c++;
        else c = 0;
        GoodPairs += c;
    }
    return (long long) numsSize * (numsSize - 1) / 2 - GoodPairs;
}