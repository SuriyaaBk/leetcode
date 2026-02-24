int minimizedMaximum(int n, int* quantities, int quantitiesSize) {
    int l = 1, r = 100000;
    while(l < r) {
        int m = (l + r) / 2, c = 0;
        for(int i = 0; i < quantitiesSize; i++) {
            c += (quantities[i] + m - 1) / m;
        }
        if(c > n) l = m + 1;
        else r = m;
    }
    return l;
}