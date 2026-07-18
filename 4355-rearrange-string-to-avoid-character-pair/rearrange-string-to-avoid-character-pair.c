char* rearrangeString(char* s, char x, char y) {
    int j = 0, k = 0;
    char* ans = (char*)malloc(101 * sizeof(char));
    for(int i = 0; s[i]; i++) {
        if(s[i] != x) ans[j++] = s[i];
        else k++;
    }
    while(k-- > 0) ans[j++] = x;
    ans[j] = '\0';
    return ans;
}