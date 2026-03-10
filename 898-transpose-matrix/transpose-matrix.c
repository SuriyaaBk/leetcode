int** transpose(int** matrix, int matrixSize, int* matrixColSize, int* returnSize, int** returnColumnSizes) {
    int n = matrixSize, m = matrixColSize[0];
    int** ans = (int**)malloc(m * sizeof(int*));
    *returnColumnSizes = (int*)malloc(m * sizeof(int));
    for(int j = 0; j < m; j++) {
        ans[j] = (int*)malloc(n * sizeof(int));
        (*returnColumnSizes)[j] = n;
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            ans[j][i] = matrix[i][j]; 
        }
    }    
    *returnSize = m;
    return ans;
}