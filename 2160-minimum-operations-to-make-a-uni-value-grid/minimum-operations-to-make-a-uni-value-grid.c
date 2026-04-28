int compare(const void* a, const void* b) {
    return *(int*)a - *(int*)b;
}
int minOperations(int** grid, int gridSize, int* gridColSize, int x) {
    int r = gridSize, c = gridColSize[0], k = 0, ans = 0; 
    int* hash = (int*)malloc((r * c) * sizeof(int));
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            hash[k++] = grid[i][j];
        }
    }    
    qsort(hash, k, sizeof(int), compare);
    for(int i = 0; i < k; i++) {
        if((hash[i] - hash[0]) % x != 0) return -1;
    }
    int median = hash[k / 2];
    for(int i = 0; i < k; i++) {
        ans += abs(hash[i] - median) / x;
    }
    return ans;
}