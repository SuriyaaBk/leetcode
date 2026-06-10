int calPoints(char** operations, int operationsSize) {
    int* hash = (int*)calloc(operationsSize, sizeof(int));
    int ans = 0, k = 0;
    for(int i = 0; i < operationsSize; i++) {
        if(operations[i][0] == 'C') {
            k--;
        } else if(operations[i][0] == 'D') {
            hash[k] = 2 * hash[k - 1];
            k++;
        } else if(operations[i][0] == '+') {
            hash[k] = hash[k - 1] + hash[k - 2];
            k++;
        } else {
            int a = 0, j = 0, s = 1;
            if(operations[i][0] == '-') {
                s = -1;
                j++;
            }
            for( ; operations[i][j]; j++) a = a * 10 + (operations[i][j] - '0');
            hash[k++] = s * a;
        }
    }
    for(int i = 0; i < k; i++) ans += hash[i];
    free(hash);
    return ans;
}