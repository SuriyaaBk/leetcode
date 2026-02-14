char* mapWordWeights(char** words, int wordsSize, int* weights, int weightsSize) {
    char* ans = (char*)malloc((wordsSize + 1) * sizeof(char));
    for(int i = 0; i < wordsSize; i++) {
        int sum = 0;
        for(int j = 0; words[i][j]; j++) {
            sum += weights[words[i][j] - 'a'];
        }
        ans[i] = 25 - sum % 26 + 'a';
    }
    ans[wordsSize] = '\0';
    return ans;
}