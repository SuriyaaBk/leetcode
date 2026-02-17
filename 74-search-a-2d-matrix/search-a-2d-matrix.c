bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target) {
    int i = 0, j = matrixColSize[0] - 1;
    while(i < matrixSize && j >= 0) {
        int n = matrix[i][j];
        if(n > target) j--;
        else if(n < target) i++;
        else return true;
    }
    return false;
}