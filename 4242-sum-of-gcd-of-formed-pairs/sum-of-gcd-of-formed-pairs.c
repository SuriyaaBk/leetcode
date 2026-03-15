int compare(const void* a, const void* b) {
    return *(int*)a < *(int*)b;
}
int GCD(int a, int b) {
    if(b > 0) return GCD(b, a % b);
    return a;
}
long long gcdSum(int* nums, int numsSize) {
    long long ans = 0;
    int* max = (int*)malloc(numsSize * sizeof(int));
    int* gcd = (int*)malloc(numsSize * sizeof(int));
    max[0] = gcd[0] = nums[0];
    for(int i = 1; i < numsSize; i++) {
        max[i] = fmax(nums[i], max[i  - 1]);
        gcd[i] = GCD(nums[i], max[i]);
    }
    qsort(gcd, numsSize, sizeof(int), compare);
    int l = 0, r = numsSize - 1;
    while(l < r) {
        ans += GCD(gcd[l++], gcd[r--]);
    }
    return ans;
}