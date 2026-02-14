int* lexicalOrder(int n, int* returnSize) {
    int* ans = (int*)malloc(n * sizeof(int));
    int a = 1;    
    for(int i = 0; i < n; i++) {
        ans[i] = a;
        if(a * 10 <= n) a *= 10;
        else {
            while(a % 10 == 9 || a == n) a /= 10;
            a++;
        }
    }
    *returnSize = n;
    return ans;
}