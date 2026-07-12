int seconds(char* a) {
    int h = (a[0] - '0') * 10 + (a[1] - '0');
    int m = (a[3] - '0') * 10 + (a[4] - '0');
    int s = (a[6] - '0') * 10 + (a[7] - '0');
    return h * 3600 + m * 60 + s;
}
int secondsBetweenTimes(char* startTime, char* endTime) {
    int end = seconds(endTime);
    int start = seconds(startTime);
    if(end < start) end += 86400; // one day has 24 * 60 * 60 seconds
    return end - start;
}