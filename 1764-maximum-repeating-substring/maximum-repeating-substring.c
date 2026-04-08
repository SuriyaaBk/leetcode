int maxRepeating(char* sequence, char* word) {
    int ans = 0, c = 0, a = strlen(sequence), b = strlen(word), n = a - b;
    for(int i = 0; i <= n; i++) {
        while(strncmp(&sequence[i + c * b], word, b) == 0) c++;
        if(c > ans) ans = c;
        c = 0;
    }
    return ans;
}