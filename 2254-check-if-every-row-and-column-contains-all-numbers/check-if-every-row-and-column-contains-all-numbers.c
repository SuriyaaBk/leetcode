bool checkValid(int** matrix, int matrixSize, int* matrixColSize) {
    int n = matrixSize;
    int* row = (int*)calloc(n + 1, sizeof(int));
    int* col = (int*)calloc(n + 1, sizeof(int));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            row[matrix[i][j]] += 1;
            col[matrix[j][i]] += 1; 
        }
        for(int k = 1; k <= n; k++) {
            if(row[k] != i + 1 || col[k] != i + 1) return false;
        }
    }
    return true;
}