char* reformatDate(char* date) {
    char* ans = (char*)malloc(11 * sizeof(char));
    int j = 0, n = strlen(date) - 4;
    for(j = 0; j < 4; j++) ans[j] = date[n++];
    char mon[4];
    n -= 8, mon[3] = '\0';
    for(int i = 0; i < 3; i++) mon[i] = date[n++];
    char month[12][4] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    ans[j++] = '-';
    for(int i = 0; i < 12; i++) {
        if(strcmp(mon, month[i]) == 0) {
            if(i / 9 == 0) {
                ans[j++] = '0';
                ans[j++] = i + '1';
            } else {
                ans[j++] = '1';
                ans[j++] = i % 9 + '0';
            }
            break;
        }
    }
    ans[j++] = '-';
    if(date[1] == 't' || date[1] == 'r' || date[1] == 'n' || date[1] == 's') {
        ans[j++] = '0';
        ans[j++] = date[0];
    } else {
        ans[j++] = date[0];
        ans[j++] = date[1];
    } ans[j] = '\0';
    return ans;
}