int romanToInt(char* s) {
    int ans = 0;
    int i = 0;
    while(s[i]) {
        while(s[i] && s[i] == 'M') {
            ans += 1000;
            i += 1;
        }
        if(s[i] && s[i + 1] && s[i] == 'C' && s[i + 1] == 'M') {
            ans += 900;
            i += 2;
        }
        if(s[i] && s[i] == 'D') {
            ans += 500;
            i += 1;
        }
        if(s[i] && s[i + 1] && s[i] == 'C' && s[i + 1] == 'D') {
            ans += 400;
            i += 2;
        }
        while(s[i] && s[i] == 'C') {
            ans += 100;
            i += 1;
        }
        if(s[i] && s[i + 1] && s[i] == 'X' && s[i + 1] == 'C') {
            ans += 90;
            i += 2;
        }
        if(s[i] && s[i] == 'L') {
            ans += 50;
            i += 1;
        }
        if(s[i] && s[i + 1] && s[i] == 'X' && s[i + 1] == 'L') {
            ans += 40;
            i += 2;
        }
        while(s[i] && s[i] == 'X') {
            ans += 10;
            i += 1;
        }
        if(s[i] && s[i + 1] && s[i] == 'I' && s[i + 1] == 'X') {
            ans += 9;
            i += 2;
        }
        if(s[i] && s[i] == 'V') {
            ans += 5;
            i += 1;
        }
        if(s[i] && s[i + 1] && s[i] == 'I' && s[i + 1] == 'V') {
            ans += 4;
            i += 2;
        }
        while(s[i] == 'I') {
            ans += 1;
            i += 1;
        }
    }
    return ans;
}