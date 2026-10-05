int scoreOfParentheses(char* s) {
    int ans = 0, score = 1;
    for(int i = 1; s[i] != '\0'; i++) {
        if(s[i] == '(') score++;
        else {
            score--;
            if(s[i - 1] == '(') ans += (1 << score);
        }
    }
    return ans;
}