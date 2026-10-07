int convertTime(char* current, char* correct) {
    int h, m, ans = 0, arr[3] = {15, 5, 1};
    h = (((correct[0] - '0') * 10) + (correct[1] - '0')) - (((current[0] - '0') * 10) + (current[1] - '0'));
    m = (((correct[3] - '0') * 10) + (correct[4] - '0')) - (((current[3] - '0') * 10) + (current[4] - '0'));
    if(m < 0) {
        if(h > 0) ans += h - 1;
        m += 60;
    } else ans += h;
    for(int i = 0; i < 3; i++) {
        if(m >= arr[i]) ans += m / arr[i];
        m %= arr[i];
    }
    return ans;
}