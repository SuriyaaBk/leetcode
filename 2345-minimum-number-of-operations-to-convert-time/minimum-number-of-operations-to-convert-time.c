int convertTime(char* current, char* correct) {
    int h, m, ans = 0;
    h = (((correct[0] - '0') * 10) + (correct[1] - '0')) - (((current[0] - '0') * 10) + (current[1] - '0'));
    m = (((correct[3] - '0') * 10) + (correct[4] - '0')) - (((current[3] - '0') * 10) + (current[4] - '0'));
    if(m < 0) {
        if(h > 0) ans += h - 1;
        m = m + 60;
    } else ans += h;
    if(m >= 15) ans += (m / 15);
    m %= 15;
    if(m >= 5) ans+= (m / 5);
    m %= 5;
    if(m >= 1) ans += m;
    return ans;
}