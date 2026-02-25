int CountOneBits(int a) {
    int x = 0;
    while(a > 0) {
        a = a & (a - 1);
        x++;
    }
    return x;
}
int compare(const void* a,const void* b) {
    int x = CountOneBits(*(int*)a);
    int y = CountOneBits(*(int*)b);
    if(x == y) return *(int*)a - *(int*)b;
    return x - y;
} 
int* sortByBits(int* arr, int arrSize, int* returnSize) {
    int* ans = (int*)malloc(arrSize * sizeof(int));
    for(int i = 0; i < arrSize; i++) ans[i] = arr[i];
    qsort(ans,arrSize,sizeof(int),compare);
    *returnSize = arrSize;
    return ans;   
}