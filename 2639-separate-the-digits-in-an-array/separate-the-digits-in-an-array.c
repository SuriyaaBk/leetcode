int* separateDigits(int* nums, int numsSize, int* returnSize) {
    int ind = 0;
    int* ans = (int*)malloc(6000 * sizeof(int));
    for(int i = 0; i < numsSize; i++) {
        int x, n = nums[i];
        if(n == 100000) x = 100000;
        else if (n <= 99999 && n >= 10000) x = 10000;
        else if (n <= 9999 && n >= 1000) x = 1000;
        else if (n <= 999 && n >= 100) x = 100;
        else if (n <= 99 && n >= 10) x = 10;
        else x = 1;
        while(x > 0) {
            ans[ind++] = (n / x) % 10;
            x /= 10;
        }
    }
    *returnSize = ind;
    return ans;
}