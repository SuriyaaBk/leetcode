int numSpecial(int** mat, int matSize, int* matColSize) {
    int ans = 0;
    int* row = (int*)calloc(matSize, sizeof(int));
    int* col = (int*)calloc(matColSize[0], sizeof(int));
    for(int i = 0; i < matSize; i++) {
        for(int j = 0; j < matColSize[0]; j++) {
            row[i] += mat[i][j];
            col[j] += mat[i][j];
        }
    }   
    for(int i = 0; i < matSize; i++) {
        for(int j = 0; j < matColSize[0]; j++) {
            if(mat[i][j] == 1 && row[i] == 1 && col[j] == 1) ans++;
        }
    }
    free(row);
    free(col);
    return ans;
}