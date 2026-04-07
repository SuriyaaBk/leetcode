/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** findWinners(int** matches, int matchesSize, int* matchesColSize, int* returnSize, int** returnColumnSizes) {
    int* wins = (int*)malloc(100001 * sizeof(int));
    int* loss = (int*)malloc(100001 * sizeof(int));
    int** ans = (int**)calloc(2, sizeof(int*));
    for(int i = 0; i < 100001; i++) wins[i] = loss[i] = 0;
    for(int i = 0; i < matchesSize; i++) {
        wins[matches[i][0]]++;
        loss[matches[i][1]]++;
    }
    ans[0] = (int*)malloc(matchesSize * sizeof(int));
    ans[1] = (int*)malloc(matchesSize * sizeof(int));
    int w = 0, l = 0;
    for(int i = 0; i < 100001; i++) {
        if(wins[i] != 0 && loss[i] == 0) ans[0][w++] = i;
        else if(loss[i] == 1) ans[1][l++] = i;
    }
    free(wins);
    free(loss);
    *returnColumnSizes = (int*)malloc(2 * sizeof(int));
    (*returnColumnSizes)[0] = w;
    (*returnColumnSizes)[1] = l;
    *returnSize = 2;
    return ans;
}