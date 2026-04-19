/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int length(int n) {
    int len = 0;
    if(n == 0) return 1;
    if(n < 0) {
        n = -n;
        len = 1;
    }
    while(n > 0) {
        len++;
        n /= 10;
    }
    return len;
}
int* findColumnWidth(int** grid, int gridSize, int* gridColSize, int* returnSize) {
    int* ans = (int*)malloc(gridColSize[0] * sizeof(int));
    for(int j = 0; j < gridColSize[0]; j++) {
        int len = length(grid[0][j]);
        for(int i = 1; i < gridSize; i++) {
            len = fmax(len, length(grid[i][j]));
        }
        ans[j] = len;
    }
    *returnSize = gridColSize[0];
    return ans;
}