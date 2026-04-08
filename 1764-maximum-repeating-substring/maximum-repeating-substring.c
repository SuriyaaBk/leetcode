int maxRepeating(char* sequence, char* word) {
    int ans = 0;
    char temp[201] = "";
    while(true) {
        strcat(temp, word);
        if(strstr(sequence, temp)) ans++;
        else break;
    }
    return ans;
}