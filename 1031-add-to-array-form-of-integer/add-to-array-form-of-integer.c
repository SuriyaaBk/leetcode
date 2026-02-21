int* addToArrayForm(int* num, int numSize, int k, int* returnSize) {
    int* ans = (int*)malloc((numSize + 6) * sizeof(int));
    int i = numSize - 1, c = k, j = 0;
    while(i >= 0 || c > 0) {
        if(i >= 0) c += num[i--];
        ans[j++] = c % 10;
        c /= 10;
    }    
    int l = 0, r = j - 1;
    while(l < r) {
        int temp = ans[l];
        ans[l++] = ans[r];
        ans[r--] = temp;
    } 
    *returnSize = j;
    return ans;
}