int seconds(char* time) {
    int h = (time[0] - '0') * 10 + (time[1] - '0');
    int m = (time[3] - '0') * 10 + (time[4] - '0');
    int s = (time[6] - '0') * 10 + (time[7] - '0');
    return h * 3600 + m * 60 + s;
}
int secondsBetweenTimes(char* startTime, char* endTime) {
    int end = seconds(endTime);
    int start = seconds(startTime);
    return end - start;
}