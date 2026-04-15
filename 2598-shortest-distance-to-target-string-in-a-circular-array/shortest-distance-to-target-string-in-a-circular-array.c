int closestTarget(char** words, int wordsSize, char* target, int start) {
    int n = wordsSize;
    for(int i = 0; i < wordsSize; i++) {
        if((strcmp(words[(start + i) % n], target) == 0) || strcmp(words[(start + n - i) % n], target) == 0) return i;
    }
    return -1;
}