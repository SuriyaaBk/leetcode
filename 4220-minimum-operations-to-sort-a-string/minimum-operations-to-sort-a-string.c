int minOperations(char* s) {
    int isSorted = 1, min_ind = 0, max_ind = 0, n;
    char min = s[0], max = s[0];
    for(n = 1; s[n]; n++) {
        if(s[n] < s[n - 1]) isSorted = 0;
        if(s[n] < min) {
            min = s[n];
            min_ind = n;
        } else if(s[n] >= max) {
            max = s[n];
            max_ind = n;
        }
    }
    if(isSorted == 1) return 0;
    if(n == 2) return -1;
    if(min_ind == n - 1 && max_ind == 0) return 3;
    if(min_ind != 0 && max_ind != n - 1) return 2;
    return 1; // if(min_ind == 0 || max_ind == n - 1) 
}