int concatenatedBinary(int n){
    int ans = 0, mod = 1000000007, bits = 0;
    for(int i = 1; i <= n; i++) {
        if((i & (i - 1)) == 0) bits += 1;
        ans = ((long) ans << bits) % mod + i;
    }
    return ans;
}