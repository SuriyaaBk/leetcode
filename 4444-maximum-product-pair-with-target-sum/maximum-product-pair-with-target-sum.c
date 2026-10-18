/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* maxProductPair(int* nums, int numsSize, int target, int* returnSize) {
    int max_pro = INT_MIN;
    int* ans = (int*)malloc(2 * sizeof(int));
    ans[0] = ans[1] = -1;
    for(int i = 0; i < numsSize - 1; i++) {
        for(int j = i + 1; j < numsSize; j++) {
            if(nums[i] == nums[j]) continue;
            if(nums[i] + nums[j] == target) {
                int pro = nums[i] * nums[j];
                if(pro > max_pro) {
                    max_pro = pro;
                    if(nums[i] > nums[j]) ans[0] = i, ans[1] = j;
                    else ans[0] = j, ans[1] = i;
                }
            }
        }
    }
    *returnSize = 2;
    return ans;
}