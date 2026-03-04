int numSpecial(int** mat, int matSize, int* matColSize) {
    int ans = 0;
    int* row = (int*)calloc(matSize, sizeof(int));
    int* col = (int*)calloc(matColSize[0], sizeof(int));
    for(int i = 0; i < matSize; i++) {
        int sum = 0;
        for(int j = 0; j < matColSize[0]; j++) {
            sum += mat[i][j];
        }
        if(sum == 1) row[i] = 1;
    }  
    for(int j = 0; j < matColSize[0]; j++) {
        int sum = 0;
        for(int i = 0; i < matSize; i++) {
            sum += mat[i][j];
        }
        if(sum == 1) col[j] = 1;
    }  
    for(int i = 0; i < matSize; i++) {
        for(int j = 0; j < matColSize[0]; j++) {
            if(mat[i][j] && row[i] && col[j]) ans++;
        }
    }
    free(row);
    free(col);
    return ans;
}