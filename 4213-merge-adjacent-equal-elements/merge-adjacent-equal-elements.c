long long* mergeAdjacent(int* nums, int numsSize, int* returnSize) {
    long long* ans = (long long*)malloc((numsSize) * sizeof(long long*));
    int j = 0;
    ans[j] = nums[0];
    for(int i = 1; i < numsSize; i++) {
        if(nums[i] == ans[j]) {
            ans[j] += nums[i];
            while(j > 0 && ans[j] == ans[j - 1]) ans[--j] += ans[j + 1]; 
        }
        else ans[++j] = nums[i]; 
    }
    *returnSize = j + 1;
    return ans;
}