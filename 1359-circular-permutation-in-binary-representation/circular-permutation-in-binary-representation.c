/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* circularPermutation(int n, int start, int* returnSize){
    int m = 1 << n;
    int* ans = (int*)malloc(m * sizeof(int));
    for(int i = 0; i < m; i++) {
        ans[i] = start ^ i ^ (i >> 1);
    }
    *returnSize = m;
    return ans;
}