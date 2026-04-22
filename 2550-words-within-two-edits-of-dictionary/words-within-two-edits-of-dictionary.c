bool check(char* q, char* d) {
    int c = 0;
    for(int i = 0; q[i]; i++) {
        if(q[i] != d[i]) c++;
        if(c > 2) return false;
    }
    return true;
}
char** twoEditWords(char** queries, int queriesSize, char** dictionary, int dictionarySize, int* returnSize) {
    int ind = 0;
    char** ans = (char**)malloc(queriesSize * sizeof(char*));
    for(int i = 0; i < queriesSize; i++) {
        for(int j = 0; j < dictionarySize; j++) {
            if(check(queries[i], dictionary[j])) {
                ans[ind++] = queries[i];
                break;
            }
        }
    }
    *returnSize = ind;
    return ans;
}