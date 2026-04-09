int maxRepeating(char* sequence, char* word) {
    int ans = 0;
    char temp[201] = "";
    strcat(temp, word);
    while(strstr(sequence, temp)) {
        strcat(temp, word);
        ans++;
    }
    return ans;
}