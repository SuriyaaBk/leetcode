int compare(const void* a, const void* b) {
    return *(int*)a > *(int*)b;
}
int getMaximumConsecutive(int* coins, int coinsSize) {
    qsort(coins, coinsSize, sizeof(int), compare);
    int ans = 1;
    for(int i = 0; i < coinsSize && ans >= coins[i]; i++) {
        ans += coins[i];
    }
    return ans;
}