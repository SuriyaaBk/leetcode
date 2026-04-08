/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findKDistantIndices(int* nums, int numsSize, int key, int k, int* returnSize) {
    int ind = 0;
    int* ans = (int*)malloc(numsSize * sizeof(int));
    int* hash = (int*)malloc(numsSize * sizeof(int));
    for(int i = 0; i < numsSize; i++) ans[i] = hash[i] = 0;
    for(int i = 0; i < numsSize; i++) {
        if(nums[i] == key) {
            int l = i - k, r = i + k;
            if(l < 0) l = 0;
            if(r >= numsSize) r = numsSize - 1;
            while(l <= r) {
                if(hash[l] == 0) ans[ind++] = l;
                hash[l++] = 1;
            }
        }
    }
    free(hash);
    *returnSize = ind;
    return ans;
}