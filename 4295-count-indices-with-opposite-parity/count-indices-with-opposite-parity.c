/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* countOppositeParity(int* nums, int numsSize, int* returnSize) {
    int* ans = (int*)malloc(numsSize * sizeof(int));
    int odd = 0, even = 0;
    for(int i = 0; i < numsSize; i++) {
        if(nums[i] & 1) odd++;
        else even++;
    }
    for(int i = 0; i < numsSize; i++) {
        if(nums[i] & 1) {
            ans[i] = even;
            odd--;
        } else {
            ans[i] = odd;
            even--;
        }
    }
    *returnSize = numsSize;
    return ans;
}