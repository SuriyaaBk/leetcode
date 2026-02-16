int compare(const void* a, const void* b) {
    return *(int*)a > *(int*)b;
}
long long minOperationsToMakeMedianK(int* nums, int numsSize, int k) {
    int n = numsSize / 2;
    long long ans = 0;
    qsort(nums, numsSize, sizeof(int), compare);
    for(int i = 0; i <= n; i++) ans += fmax(0, nums[i] - k);
    for(int i = n; i < numsSize; i++) ans += fmax(0, k - nums[i]);
    return ans;
}