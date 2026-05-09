int* scoreValidator(char** events, int eventsSize, int* returnSize) {
    int* ans = (int*)calloc(2, sizeof(int));
    for(int i = 0; i < eventsSize; i++) {
        if(events[i][0] <= '6') ans[0] += events[i][0] - '0';
        else if(events[i][1] != '\0') ans[0] += 1;
        else {
            ans[1] += 1;
            if(ans[1] == 10) break;
        }
    }
    *returnSize = 2;
    return ans;
}