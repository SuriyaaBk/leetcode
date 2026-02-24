int minimizedMaximum(int n, int* quantities, int quantitiesSize) {
    int l = 1, r = quantities[0];
    for(int i = 1; i < quantitiesSize; i++) r = fmax(r, quantities[i]);
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