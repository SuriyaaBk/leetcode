/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDegrees(int** matrix, int matrixSize, int* matrixColSize, int* returnSize) {
    int* ans = (int*)malloc(matrixSize * sizeof(int));
    for(int i = 0; i < matrixSize; i++) {
        int sum = 0;
        for(int j = 0; j < matrixColSize[i]; j++) {
            sum += matrix[i][j];
        }
        ans[i] = sum;
    }
    *returnSize = matrixSize;
    return ans;
}