int maximumCandies(int* candies, int candiesSize, long long k) {
    int l = 0, r = 10000000;
    while(l < r) {
        int m = (l + r + 1) / 2;
        long long c = 0;
        for(int i = 0; i < candiesSize; i++) {
            c+= candies[i] / m;
        }
        if(c >= k) l = m;
        else r = m - 1;
    }
    return l;
}