bool digitCount(char* num) {
    int* hash = (int*)calloc(10, sizeof(int));
    for(int i = 0; num[i] != '\0'; i++) {
        hash[num[i] - '0']++;
    }
    for(int i = 0; num[i] != '\0'; i++) {
        if(hash[i] != num[i] - '0') return false;
    }
    return true;
}