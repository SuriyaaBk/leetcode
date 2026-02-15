int* toggleLightBulbs(int* bulbs, int bulbsSize, int* returnSize) {
    int j = 0;
    int* ans = (int*)malloc(bulbsSize * sizeof(int));
    int* hash = (int*)calloc(101, sizeof(int));
    for(int i = 0; i < bulbsSize; i++) hash[bulbs[i]] += 1;
    for(int i = 1; i <= 100; i++) {
        if(hash[i] & 1 == 1) ans[j++] = i;
    }
    free(hash);
    *returnSize = j;
    return ans;
}