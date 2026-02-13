int minimumOperations(int** grid, int gridSize, int* gridColSize) {
    int ans  = 0;
    for(int i = 0; i < gridColSize[0]; i++) {
        for(int j = 1; j < gridSize; j++) {
            if(grid[j][i] <= grid[j - 1][i]) {
                ans += grid[j - 1][i] - grid[j][i] + 1;
                grid[j][i] = grid[j - 1][i] + 1;
            }
        }
    }
    return ans;
}