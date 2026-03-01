char* trimTrailingVowels(char* s) {
    int i;
    char* ans = (char*)malloc(101 * sizeof(char));
    for(i = 0; s[i]; i++) ans[i] = s[i];
    while(i > 0 && (ans[i - 1] == 'a' || ans[i - 1] == 'e' || ans[i - 1] == 'i' || ans[i - 1] == 'o' || ans[i - 1] == 'u')) i--;
    ans[i] = '\0';
    return ans;
}