int compare(const void* a, const void* b) {
    return *(int*)a > *(int*)b;
}
int kthSmallest(int** matrix, int matrixSize, int* matrixColSize, int k) {
    int t = 0, n = matrixSize;
    int* nums = (int*)malloc((n * n) * sizeof(int));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            nums[t++] = matrix[i][j];
        }
    }
    qsort(nums, t, sizeof(int), compare);
    int ans = nums[k - 1];
    free(nums);
    return ans;
}