var minOperations = function(s) {
    let n, c = 0, j = 0;
    for(n = 0; n < s.length; n++, j ^= 1) {
        if(s[n] - '0' == j) c++;
    }
    return c < n - c ? c : n - c;    
};