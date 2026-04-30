char* reformatNumber(char* number) {
    char* ans = (char*)malloc(150 * sizeof(char));
    int i = 0, j = 0, c = 0;
    while(number[i]) {
        if(c == 3) {
            ans[j++] = '-';
            c = 0;
        } if(number[i] >= '0' && number[i] <= '9') {
            ans[j++] = number[i];
            c++;
        } i++;
    }
    if(ans[j - 2] == '-') {
        ans[j - 2] = ans[j - 3];
        ans[j - 3] = '-';
    }
    if(ans[j - 1] == '-') ans[j - 1] = '\0';
    ans[j] = '\0';
    return ans;
}