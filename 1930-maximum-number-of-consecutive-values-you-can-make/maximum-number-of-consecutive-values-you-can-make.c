int getMaximumConsecutive(int* coins, int coinsSize) {
    int ans = 1;
    int* hash = (int*)calloc(40001, sizeof(int));
    for(int i = 0; i < coinsSize; i++) hash[coins[i]]++;
    for(int i = 1; i <= 40000; i++) {
        if(hash[i] > 0) {
            if(ans < i) break;
            else ans += hash[i] * i;
        }
    }
    free(hash);
    return ans;
}