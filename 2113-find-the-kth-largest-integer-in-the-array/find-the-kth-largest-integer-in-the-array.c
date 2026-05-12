int compare(const void* a, const void* b) {
    const char* str1 =  *(const char**)a;
    const char* str2 =  *(const char**)b;
    int len1 = strlen(str1), len2 = strlen(str2); 
    if(len1 == len2) return strcmp(str1, str2);
    return len1 - len2;

}
char* kthLargestNumber(char** nums, int numsSize, int k) {
    qsort(nums, numsSize, sizeof(char*), compare);
    return nums[numsSize - k];
}