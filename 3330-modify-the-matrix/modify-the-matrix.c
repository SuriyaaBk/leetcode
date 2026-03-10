int** modifiedMatrix(int** matrix, int matrixSize, int* matrixColSize, int* returnSize, int** returnColumnSizes) {
    int n = matrixSize, m = matrixColSize[0];
    *returnColumnSizes = (int*)malloc(n * sizeof(int));
    for(int j = 0; j < m; j++) {
        int max = matrix[0][j];
        for(int i = 1; i < n; i++) {
            if(matrix[i][j] > max) max = matrix[i][j];
        }
        for(int i = 0; i < n; i++) {
            if(matrix[i][j] == -1) matrix[i][j] = max;
            (*returnColumnSizes)[i] = m;
        }
    }    

    *returnSize = n;
    return matrix;
}