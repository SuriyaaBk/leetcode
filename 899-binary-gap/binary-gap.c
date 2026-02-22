int binaryGap(int n) {
    int ans = 0, i = -1, j = 0;
    while(n > 0) {
        if((n & 1) == 1) {
            if(i != -1) ans = fmax(ans, j - i);
            i = j;
        }
        j++;
        n /= 2;
    }
    return ans;
}