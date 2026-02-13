char* generateTag(char* caption) {
    char* ans = (char*)malloc(200 * sizeof(int));
    int j = 0, flag = 0;
    ans[j++] = '#';
    for(int i = 0; caption[i]; i++) {
        if(caption[i] == ' ' && j > 1) {
            flag = 1;
        } else if(flag) {
            if(caption[i] >= 'a' && caption[i] <= 'z') ans[j++] = caption[i] - 'a' + 'A';
            else if(caption[i] >= 'A' && caption[i] <= 'Z') ans[j++] = caption[i];
            flag = 0;
        }
        else {
            if(caption[i] >= 'A' && caption[i] <= 'Z') ans[j++] = caption[i] - 'A' + 'a';
            else if(caption[i] >= 'a' && caption[i] <= 'z') ans[j++] = caption[i];
        }
    }
    if(j > 100) ans[100] = '\0';
    else ans[j] = '\0';
    return ans;
}