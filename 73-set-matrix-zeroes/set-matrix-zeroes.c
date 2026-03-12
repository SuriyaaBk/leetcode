void setZeroes(int** matrix, int matrixSize, int* matrixColSize) {
    int n = matrixSize, m = matrixColSize[0];
    int* row = (int*)calloc(n, sizeof(int));
    int* col = (int*)calloc(m, sizeof(int));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(matrix[i][j] == 0) {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(row[i] || col[j]) {
                matrix[i][j] = 0;
            }
        }
    }
    free(row);
    free(col);
}