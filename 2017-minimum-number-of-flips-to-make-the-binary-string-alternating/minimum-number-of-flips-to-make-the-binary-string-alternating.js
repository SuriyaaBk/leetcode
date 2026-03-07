var minFlips = function(s) {
    const a = [0, 0];
    let ans = 100000, x = 0, y = 0;
    for(let i = 0; i < s.length; i++, x ^= 1) {
        a[(s[i] - '0') ^ x]++;
    }
    for(let i = 0; i < s.length; i++, x ^= 1, y ^= 1) {
        a[(s[i] - '0') ^ y]--;
        a[(s[i] - '0') ^ x]++;
        ans = Math.min(ans, Math.min(a[0], a[1]));
    }
    return ans;
};