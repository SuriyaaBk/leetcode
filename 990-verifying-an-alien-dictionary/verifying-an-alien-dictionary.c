bool isAlienSorted(char** words, int wordsSize, char* order) {
    int* hash = (int*)malloc(26 * sizeof(int));
    for(int i = 0; order[i]; i++) hash[order[i] - 'a'] = i;
    int min = -1;
    for(int i = 1; i < wordsSize; i++) {
        int j = 0;
        while(words[i-1][j] && words[i][j] && words[i-1][j] == words[i][j]) j++;
        if(words[i-1][j]) {
            if(words[i][j] == '\0' || hash[words[i-1][j] - 'a'] > hash[words[i][j] - 'a']) return false;
        } 
    }
    return true;
}