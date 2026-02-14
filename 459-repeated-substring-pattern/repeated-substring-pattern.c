bool repeatedSubstringPattern(char* s) {
    int n = strlen(s);
    for(int i = 1; i <= n / 2; i++) {
        if(n % i == 0) {
            int flag = true;
            for(int j = i; j < n; j++) {
                if(s[j] != s[j - i]) {
                    flag = false;
                    break;
                }
            }
            if(flag == true) return true;
        }
    }
    return false;
}