bool consecutiveSetBits(int n) {
    int c = 0, x = n;
    while(x > 2) {
        if((x & 3) == 3) c++;
        x >>= 1;
    }
    return c == 1;
}