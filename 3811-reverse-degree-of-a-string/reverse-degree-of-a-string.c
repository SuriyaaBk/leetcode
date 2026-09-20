int reverseDegree(char* s) {
    int ans = 0;
    for(int i = 0; s[i] != '\0'; i++) {
        int val = abs('z' - s[i] + 1);
        ans += (val * (i + 1));
    }
    return ans;
}