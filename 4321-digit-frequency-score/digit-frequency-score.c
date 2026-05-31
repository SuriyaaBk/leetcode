int digitFrequencyScore(int n) {
    int* hash = (int*)calloc(10, sizeof(int));
    int ans = 0, x = n;
    while(x > 0) {
        hash[x % 10]++;
        x /= 10;
    }
    for(int i = 0; i < 10; i++) ans += (i * hash[i]);
    return ans; 
}