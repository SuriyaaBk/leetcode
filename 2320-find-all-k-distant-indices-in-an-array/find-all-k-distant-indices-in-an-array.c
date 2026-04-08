/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findKDistantIndices(int* nums, int numsSize, int key, int k, int* returnSize) {
    int last = -1, ind = 0;
    int* ans = (int*)malloc(numsSize * sizeof(int));
    for(int i = 0; i < numsSize; i++) ans[i] = 0;
    for(int i = 0; i < numsSize; i++) {
        if(nums[i] == key) {
            int l = i - k, r = i + k;
            if(l <= last) l = last + 1;
            if(r >= numsSize) r = numsSize - 1;
            while(l <= r) ans[ind++] = l++;
            last = r;
        }
    }
    *returnSize = ind;
    return ans;
}