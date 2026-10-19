int compare(const void* a,const void* b){
    return *(int*)a - *(int*)b;
}
int* targetIndices(int* nums, int numsSize, int target, int* returnSize) {
    int ind = 0, count = 0;
    qsort(nums, numsSize, sizeof(int), compare);
    for(int i = 0; i < numsSize; i++) {
        if(nums[i] == target) count++;
        if(nums[i] > target) break;
    }   
    int* ans = (int*)malloc(count * sizeof(int));
    for(int i = 0; i < numsSize; i++) {
        if(nums[i] == target) ans[ind++] = i;
        if(nums[i] > target) break;
    }
    *returnSize = count;
    return ans;
}