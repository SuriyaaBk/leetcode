int minFlips(char* s) {
    int zeros = 0, ones = 0, n;
    for(n = 0; s[n]; n++) {
        if(s[n] == '0') zeros++;
        else ones++;
    }
    if(n < 3) return 0;
    int res1 = zeros;
    int res2 = fmax(0, ones - 1);
    int res3 = ones - (s[0] - '0') - (s[n-1] - '0');
    return fmin(res1, fmin(res2, res3));
}