int compare(const void* a, const void* b) {
    return *(int*)b - *(int*)a;
}
double minPrice(int* prices, int pricesSize, int* discounts, int discountsSize) {
    double ans = 0;
    qsort(prices, pricesSize, sizeof(int), compare);
    qsort(discounts, discountsSize, sizeof(int), compare);
    for(int i = 0; i < pricesSize; i++) {
        if(i < discountsSize) {
            ans += (double) prices[i] * (100 - discounts[i]) / 100;
        } else ans += prices[i];
    }
    return ans;
}