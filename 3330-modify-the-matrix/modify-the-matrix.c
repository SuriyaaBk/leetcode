int** modifiedMatrix(int** matrix, int matrixSize, int* matrixColSize, int* returnSize, int** returnColumnSizes) {
    int n = matrixSize, m = matrixColSize[0];
    int* col_max = (int*)malloc(m * sizeof(int));
    int** ans = (int**)malloc(n * sizeof(int*));
    *returnColumnSizes = (int*)malloc(n * sizeof(int));
    for(int j = 0; j < m; j++) {
        int max = matrix[0][j];
        for(int i = 1; i < n; i++) {
            if(matrix[i][j] > max) max = matrix[i][j];
        }
        col_max[j] = max;
    }    
    for(int i = 0; i < n; i++) {
        ans[i] = (int*)malloc(m * sizeof(int));
        for(int j = 0; j < m; j++) {
            if(matrix[i][j] != -1) ans[i][j] = matrix[i][j];
            else ans[i][j] = col_max[j];
        }
        (*returnColumnSizes)[i] = m;
    }
    free(col_max);
    *returnSize = n;
    return ans;
}