int minPartitions(char* n) {
    int ans = 0;
    for(int i = 0; n[i] != '\0'; i++) {
        int num = n[i] - '0';
        ans = fmax(ans, num);
    }
    return ans;
}