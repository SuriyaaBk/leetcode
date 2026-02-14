bool repeatedSubstringPattern(char* s) {
    int n = strlen(s);
    char t[2 * n + 1];
    strcpy(t, s);
    strcat(t, s);
    t[2 * n - 1] = '\0';
    return strstr(t + 1, s);
}