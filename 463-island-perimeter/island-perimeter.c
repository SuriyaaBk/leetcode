int islandPerimeter(int** grid, int gridSize, int* gridColSize) {
    int r = gridSize, c = gridColSize[0], ans = 0;
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            if(grid[i][j] == 1) {
                if(i == 0 || grid[i-1][j] == 0) ans += 1;
                if(j == 0 || grid[i][j-1] == 0) ans += 1;
                if(i+1 == r || grid[i+1][j] == 0) ans += 1;
                if(j+1 == c || grid[i][j+1] == 0) ans += 1;
            }
        }
    }
    return ans;
}