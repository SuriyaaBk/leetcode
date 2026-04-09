int maximumPopulation(int** logs, int logsSize, int* logsColSize) {
    int* hash = (int*)calloc(101, sizeof(int));
    int c = 0, ans = 0;
    for(int i = 0; i < logsSize; i++) {
        int l = logs[i][0], r = logs[i][1];
        while(l < r) {
            hash[l - 1950]++;
            l++;
        }
    }
    for(int i = 0; i <= 100; i++) {
        if(hash[i] > c) {
            c = hash[i];
            ans = i;
        }
    }
    free(hash);
    return ans + 1950;
}