#define gray(n) (n ^ (n >> 1));
int* grayCode(int n, int* returnSize) {
    n = 1 << n; //squaring n;
    int* ans=(int*)malloc(n * sizeof(int));
    for(int i = 0; i < n; i++) ans[i] = gray(i);
    *returnSize = n;
    return ans;
}