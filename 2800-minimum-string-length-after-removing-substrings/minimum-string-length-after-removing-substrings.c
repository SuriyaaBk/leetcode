int minLength(char* s) {
    int j = 0;
    char* t = (char*)malloc(101 * sizeof(char));
    for(int i = 0; s[i]; i++) {
        if(j > 0) {
            if(s[i] == 'B' && t[j - 1] == 'A') j--;
            else if(s[i] == 'D' && t[j - 1] == 'C') j--;
            else t[j++] = s[i];
        }
        else t[j++] = s[i];
    }
    free(t);
    return j;
}