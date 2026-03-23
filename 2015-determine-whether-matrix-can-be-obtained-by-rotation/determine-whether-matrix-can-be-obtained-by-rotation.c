bool findRotation(int** mat, int matSize, int* matColSize, int** target, int targetSize, int* targetColSize) {
    int n = matSize, c0 = 0, c90 = 0, c180 = 0, c270 = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(mat[i][j] != target[i][j]) c0++;
            if(mat[i][j] != target[n-j-1][i]) c90++;
            if(mat[i][j] != target[n-i-1][n-j-1]) c180++;
            if(mat[i][j] != target[j][n-i-1]) c270++;
        }
    }
    if(c0 == 0 || c90 == 0 || c180 == 0 || c270 == 0) return true;
    return false;
}